#include <iostream>

using namespace std;

struct Something
{
	int a, b, c, d; // 4 x 4 = 16 bytes
};

int main()
{
	int x = 5;

	//int * ptr_x = &x;						// ���⸦ �߿�. �ּ�1 ����.
	/*cout << ptr_x << endl;				// ���� �޸� �ּ� �������
	cout << *ptr_x << endl;					// �� �޸� �ּ��� �����͸� �ҷ���
	cout << typeid(ptr_x).name() << endl;*/	// ������ Ÿ���� �˷���.

	double d = 123.0;
	int* ptr_x; // �� ���¿��� ptr_x�� ����Ϸ� �ϸ� ������ ���. �ֳ��ϸ� ptr_x �ʱ�ȭ�� �� �Ǿ� �ֱ� ����!
	double* ptr_d;

	cout << sizeof(x) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl; // �ּ�2 ����
	
	Something ss;
	Something *ptr_s = &ss;

	cout << sizeof(Something) << endl;	// 16btyes	
	cout << sizeof(ptr_s) << endl;		// 4btyes �ּ� ���̶� 4����Ʈ.
	

	cout << "--------------------------------" << endl;
	cout << &ss << endl; // �������� ����ü�� �ּҴ� ����ü ���� ù ��° ������ �ּҿ� ����!
	int pos_a = (int)&(ptr_s->a);
	int pos_b = (int)&(ptr_s->b);

	cout << pos_a << endl;
	cout << pos_b << endl;

	return 0;
}

// #1. int* ptr_x = &x, ptr_y = &x;�� ���
// �տ� x�� �����ͷ� ����ǰ� y�� ������� �ʴ´�.
// typedef int* pint; �̷� ������ int pointer�� pint��� ���� ������ Ÿ���� �����,
// pint ptr_x = &x, ptr_y = &x �� �����ϸ� �� �� �����ͷ� ����ȴ�.
// �ַ� *�� �ش� ������ ���� �ٷ� ���̳�, ������ Ÿ�� * ������ ����. �̷��� ���� ��������� ǥ���Ѵ�.

// #2. double ��ü�� 8����Ʈ�ε�, double�� �ּҰ� 4����Ʈ�� ������ ������?
// �ּ� ��ü�� �����ϴ� ����Ʈ�� �����̴�. x64�� ������ x86���� �� ���� ������ �� �ֱ⿡ �ּ� �������� 8bytes�̴�.
// ���� : ������ ������ ������� �����Ͱ� ����Ű�� �ִ� �������� ������ʹ� ��� ���� �����ϴ�!!