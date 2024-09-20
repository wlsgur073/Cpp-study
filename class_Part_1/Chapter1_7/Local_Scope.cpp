#include <iostream>

using namespace std;

int main()
{
	//int x(0); // x = 0도 가능

	//cout << x << " " << &x << endl; // &는 x의 주소를 알려주는 코드

	//{
	//	//int x = 0;
	//	x = 2;
	//	cout << x << " " << &x << endl; // 위 x와 현재 x의 주소값이 다른 것을 알 수 있다
	//}

	//{
	//	int x = 0;
	//	cout << x << " " << &x << endl;
	//}

	// 삼항 연산자(Ternary Operator)

	int i = 2;

	int j = (i > 0) ? 1 : 2; // 괄호 안이 참 -> ' : ' 의 왼쪽 값을 실행, 거짓이면 오른쪽

	cout << j << endl;

	return 0;
}