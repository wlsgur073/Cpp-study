#include <iostream>

using namespace std;

int add(int i, int j); // #2 ������ �ּ� ������ ������ �������� ��� ����
int subtract(int i, int j); // #2ó�� �ϴ� ���� forward declaration ���� ���� �̶� ��
int multiply(int i, int j);

int main()
{
	cout << add(2, 2) << endl; // #1 �������� ������ �Ʒ��� �б⿡ �� add �� ����
	cout << subtract(6, 4) << endl;
	cout << multiply(3, 3) << endl;
	
	return 0;
}

// definition ����
int add(int i, int j)
{
	return i + j;
}

int subtract(int i, int j)
{
	return i - j;
}

int multiply(int i, int j)
{
	return i * j;
}