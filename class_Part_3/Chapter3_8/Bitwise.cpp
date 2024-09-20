#include <iostream>
#include <bitset> // 2진수로 바꿔서 출력해주는 라이브러리

int main()
{
	using namespace std;

	// unsigned int a = 3;
	// cout << std::bitset<4>(a) << endl; // a가 어떻게 저장이 되는지 2진수로 출력해줌
	// <>괄호는 비트를 의미함.
	// unsigned int b = a << 1; // 왼쪽으로 1번 시프트(이동)함.
	// cout << std::bitset<4>(b) << " " << b << endl; // 10진수도 당연히 바뀜
	// cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl; 
	// cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl; 

	// cout << std::bitset<4>(~a) << " " << ~a << endl; // bitwise는 ~가 not이다.

	//이진수 표현은 앞에 0b를 붙힌다.
	unsigned int b = 0b1100;
	unsigned int c = 0b0110;
	cout << b << endl; // 10진수로 표현됨
	cout << c << endl;
	cout << std::bitset<4>(b & c) << endl; // logical 연산 && 와 같음
	cout << std::bitset<4>(b | c) << endl; // ||
	cout << std::bitset<4>(b ^ c) << endl; // !=
	// &는 공통되는 1만 남기고 나머지 0으로 shift
	// |는 1이 있는 부분 모두 1로 shift
	// ^는 공통되는 1를 0으로 shift. 나머지 1은 모두 대입.
	
	return 0;
}