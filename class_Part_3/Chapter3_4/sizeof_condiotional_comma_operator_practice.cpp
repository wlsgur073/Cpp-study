#include <iostream>

/*int getPrice(bool onSale) // #3
{
	if (onSale)
		return 10;
	else
		return 100;
}*/

int main()
{
	using namespace std;
	
	// sizeof �н�

	// float a;
	// sizeof(float);
	// sizeof(a);

	// Comma Operator �н� // �޸��� �׻� �޸� ���۷����ͷ� ���Ǵ� �� �ƴϴ�.

	// int x = 3;
	// int y = 10;
	// int z = (++x, ++y); // Ǯ� ���� �Ʒ��� ����. ���ʺ��� ���������� �����ϴ� ���� ������ ���.
	// ++x;
	// ++y;
	// int z = y;

	// cout << x << " " << y << " " << z << endl;

	// int a = 1, b = 10;
	// int z;
	// z = a, b; // a�� 1, b�� 10, ������ ���� z�� �����ϴ� z�� 10�� ���ðŶ� ������������...
	// �켱 ������ ���ؼ� = ���� �� ���� �ٷ� z�� �����Ѵ�. (z = a), b; ó��.
	// ��ó�� (a, b)�� �ϸ� ������ ���� z�� ����ȴ�.

	// z = (++a, a + b); // ���� ++a�� 2�� �ǰ� a + b���� a�� 2�� �Ǿ� �ִ� ���¿��� b(10)�� ������ �����.
	// �޸� �������� ������ �� �˰� �־�� �Ѵ�.


	// Conditional Operator (arithmetric if) �н� - ������ ���� ������
	// bool onSale = true;

	// const int price = (onSale == true) ? 10 : 100; // #2. �׷��� const�� ���� �����ڷ� ǥ���Ѵ�. (������ ��쿡��)
	// const int price = getPrice(onSale); // #3 ���ε� ǥ�� ����. ������ ��쿡�� #3ó�� if�� �ɰ��� ���°� �б� ���ϴ�.
	
	// #1. if���� const�� ���� ������ ��.
	/*if (onSale)
		price = 10;
	else
		price = 100;*/

	// cout << price << endl;

	// *ex.)  a ? b : c ? d : e �� ��� right and left asscociativity of assignment�� ���ؼ�
	// (a ? d : (c ? d : e)) c�� ���� ��� d, ������ ��� e�� ���� ����,  a�� ���� ��� d ������ ��� c��ȣ�� ���� �����ش�.

	return 0;
}