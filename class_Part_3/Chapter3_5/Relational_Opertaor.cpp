#include <iostream>
#include <iomanip>
#include <cmath> // �����Լ��� ������ �ִ� �������

int main()
{
	using namespace std;

	/*int x, y;
	cin >> x >> y;
	cout << "Your input valuse are : " << x << " " << y << endl;

	if (x == y)
		cout << "equal" << endl;
	if (x != y)
		cout << "Not equal" << endl;
	if (x > y)
		cout << "x is greater than y" << endl;
	if (x < y)
		cout << "x is less than y" << endl;
	if (x >= y)
		cout << "x is greater than y or equal to y" << endl;
	if (x <= y)
		cout << "x is less than or equal to y" << endl;*/

	// �ε� �Ҽ��������� ���ƺ����� Ʋ����.

	double d1 = 100 - 99.99; // 0.001
	double d2 = 10 - 9.99;	 // 0.001

	cout << std::setprecision(14); // d1�� d2�� �ٸ� ����.

	cout << d1 << endl;
	cout << d2 << endl;

	// d1�� d2�� ���� ���� �˰� �ʹٸ�,
	// cout << d1 - d2 << endl;
	cout << std::abs(d1 - d2) << endl; // ads�� absolute ���밪�� ���۷����� <cmath> include�ؾ���

	if (d1 == d2)
		cout << "equal" << endl;
	else
	{
		cout << "Not equal" << endl;

		if (d1 > d2)
			cout << "d1 > d2" << endl;
		else // if (d1 < d2) because d1 != d2
			cout << "d1 < d2" << endl;
	}
	const double epsilon = 1e-16; // ������ �Ѱ�(����)�� ���س��� ���ϴ� ��

	if (std::abs(d1 - d2) < epsilon)
		cout << " Approximately equal" << endl;
	else
		cout << "Not equal" << endl;

	return 0;
}