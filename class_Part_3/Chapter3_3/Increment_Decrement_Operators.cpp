#include <iostream>

using namespace std;

int add(int a, int b)
{
	return a + b;
}


int main()
{
	/*int x = 6, y = 6;

	cout << x << " " << y << endl;
	cout << ++x << " " << --y << endl;
	cout << x << " " << y << endl;
	cout << x++ << " " << y-- << endl;
	cout << x << " " << y << endl;*/

	// ++�� �տ� �� ��� : 1 + (����) // ++�� �ڿ� �� ��� : (����) + 1
	// �� ���̸� �˰� �־�� �Ѵ�.


	int i = 1, c = 2;
	// int v = add(i, ++i); // ���� ������ ���������� �߻� -> �̷��� ���� �ȵȴ�.
	// i = i++ undefine ��Ȯ���� ���� ��.
	int v = add(i, ++c);
	cout << v << endl;

	return 0;
}