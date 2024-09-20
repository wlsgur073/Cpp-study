#include <iostream>
#include "MY_CONSTANTS.h"
//const의 이해

using namespace std;

void printNumber(const int my_Number) // const int'&' 레퍼런스까지 붙히는 경우가 대부분이다. 이후 추가설명
{
	// my_Number = 456; // 파라미터를 이렇게 바꾸는 경우는 드물다. 그러기에 파라미터에는 const를 자주 쓴다.
	// int n = my_Number; // 이렇게도 바꿀 수 있음.
	cout << my_Number << endl;
}

int main()
{
	const double gravity{ 9.8 }; // const를 붙히면 값이 고정된다. 바꿀 수 없음.
	//gravity = 1.2;

	int number;
	cin >> number;
	const int special_number(number);
	//special_number은 고정값이라 바꿀 수 없지만, number는 바꿀 수 있다(run time).

	// constexpr int my_const(123);
	// 이 경우에는 compile time에 이미 const로 완전히 고정시킬 수 있다.
	// const int spectial_number(number);
	// 이 경우에는 run time 작동 중에 사용자에 의해서 고정시켜야 하는 것이라 compile time에 적용 못해서 에러가 뜸.

	double radius;
	double circumference = 2.0 * radius * constats::pi;

	return 0;
}