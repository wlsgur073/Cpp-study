#include <iostream>

using namespace std;

int main()
{
	//int x(0); // x = 0�� ����

	//cout << x << " " << &x << endl; // &�� x�� �ּҸ� �˷��ִ� �ڵ�

	//{
	//	//int x = 0;
	//	x = 2;
	//	cout << x << " " << &x << endl; // �� x�� ���� x�� �ּҰ��� �ٸ� ���� �� �� �ִ�
	//}

	//{
	//	int x = 0;
	//	cout << x << " " << &x << endl;
	//}

	// ���� ������(Ternary Operator)

	int i = 2;

	int j = (i > 0) ? 1 : 2; // ��ȣ ���� �� -> ' : ' �� ���� ���� ����, �����̸� ������

	cout << j << endl;

	return 0;
}