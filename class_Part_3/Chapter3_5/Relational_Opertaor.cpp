#include <iostream>
#include <iomanip>
#include <cmath> // 수학함수를 가지고 있는 헤더파일

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

	// 부동 소수점에서는 같아보여도 틀리다.

	double d1 = 100 - 99.99; // 0.001
	double d2 = 10 - 9.99;	 // 0.001

	cout << std::setprecision(14); // d1와 d2가 다른 이유.

	cout << d1 << endl;
	cout << d2 << endl;

	// d1와 d2의 차이 값을 알고 싶다면,
	// cout << d1 - d2 << endl;
	cout << std::abs(d1 - d2) << endl; // ads는 absolute 절대값의 오퍼레이터 <cmath> include해야함

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
	const double epsilon = 1e-16; // 오차의 한계(범위)를 정해놓고 비교하는 법

	if (std::abs(d1 - d2) < epsilon)
		cout << " Approximately equal" << endl;
	else
		cout << "Not equal" << endl;

	return 0;
}