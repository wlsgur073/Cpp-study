#include <iostream>

using namespace std;

int min(int x, int y)
{
	if (x > y)
		return y; 
	// x�� y���� Ŭ ��� y�� ����
	else	
		return x;
	// �׷��� ���� ��� x ����

	// return (x > y) ? y : x; // ���� �����ڷ� �����Ҽ��� ����.
}

int main()
{
	int x;
	cin >> x;

	// if (x > 10)
		// cout << x << " is bigger than 10 " << endl;
	// else if (x < 10)
		// cout << "x is less than 10" << endl;
	// x�� 10�� ���� if�� else if���� ������� ����.
	// else // if (x == 10)
		// cout << "x is exactly 10" << endl;
	// �̷��� ü���� ������.

	if (x > 10)
		cout << "A" << endl;
	else if (x == -1)
		return 0;
	// exit(0); // else if�� ����Ǹ� ���α׷��� �������� �ִ�.
	// �׷��ٰ� return 0�� break�� ������ �ƴϴ�.
	// break�� �ش� ����� ������ ���. return�� ���α׷��� ������ ���.
	else if (x < 0)
		cout << "B" << endl;

	cout << "Hello" << endl;

	return 0;
}