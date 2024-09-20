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
	
	// sizeof 학습

	// float a;
	// sizeof(float);
	// sizeof(a);

	// Comma Operator 학습 // 콤마가 항상 콤마 오퍼레이터로 사용되는 건 아니다.

	// int x = 3;
	// int y = 10;
	// int z = (++x, ++y); // 풀어서 쓰면 아래와 같다. 왼쪽부터 오른쪽으로 연산하는 것이 보통의 경우.
	// ++x;
	// ++y;
	// int z = y;

	// cout << x << " " << y << " " << z << endl;

	// int a = 1, b = 10;
	// int z;
	// z = a, b; // a는 1, b는 10, 오른쪽 값을 z에 대입하니 z도 10이 나올거라 생각할테지만...
	// 우선 순위에 의해서 = 다음 뒷 값을 바로 z에 대입한다. (z = a), b; 처럼.
	// 위처럼 (a, b)로 하면 오른쪽 값이 z에 선언된다.

	// z = (++a, a + b); // 먼저 ++a가 2가 되고 a + b에서 a가 2가 되어 있는 상태에서 b(10)과 덧셈이 진행됨.
	// 콤마 연산자의 순서를 잘 알고 있어야 한다.


	// Conditional Operator (arithmetric if) 학습 - 전에는 삼항 연산자
	// bool onSale = true;

	// const int price = (onSale == true) ? 10 : 100; // #2. 그래서 const는 삼항 연산자로 표현한다. (간단한 경우에만)
	// const int price = getPrice(onSale); // #3 으로도 표현 가능. 복잡한 경우에는 #3처럼 if문 쪼개서 쓰는게 읽기 편하다.
	
	// #1. if문에 const를 쓰면 에러가 뜸.
	/*if (onSale)
		price = 10;
	else
		price = 100;*/

	// cout << price << endl;

	// *ex.)  a ? b : c ? d : e 의 경우 right and left asscociativity of assignment에 의해서
	// (a ? d : (c ? d : e)) c가 참일 경우 d, 거짓일 경우 e를 먼저 보고,  a가 참일 경우 d 거짓일 경우 c괄호의 값을 보여준다.

	return 0;
}