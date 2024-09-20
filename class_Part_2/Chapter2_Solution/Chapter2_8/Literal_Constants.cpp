#include <iostream>

int main()
{
	using namespace std;

	//Decimal(10진수)	: 0 1 2 3 4 5 6 7 8 9 10
	//Octal(8진수)		: 0 1 2 3 4 5 6 7 10 11 12 13
	//Hexa(16진수)		: 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

	// 16진수를 많이 쓰는 이유 :
	// ex.) 0011 1010 1111 1111 -> 3AFF 이런식으로 짧게 표현 가능

	int x = 012; // 숫자 앞에 0을 붙히면 8진수로 표현됨. Octal의 10번째 숫자는 12.
	int f = 0xF; // 0과 숫자 사이에 x를 붙히면 Hexa 표현. A가 10이고 F는 15임으로 15.
	cout << f << endl;

	return 0;
}