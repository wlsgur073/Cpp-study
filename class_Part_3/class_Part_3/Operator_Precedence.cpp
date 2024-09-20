#include <iostream>
#include <cmath> // #2. 제곱을 표현하기 위해서 cmath를 넣는다.

using namespace std;

int main()
{
	int x = 3 * 4 / 2;
	// 곱하기와 나누기는 계산 우선순위가 같으므로 associativity 규칙에 의거해 실행된다.
	// "Operator in C and C++" 위키피디아 검색 참고

	// #1. C++에서는 ^ 가 제곱을 의미하지만, C에서는 그렇지 않다.
	int i = std::pow(2, 3); // #3. power함수를 넣고 (n, m) n의 m제곱을 표현.
	cout << i << endl;

	int y = 3;

	int z = x;
	z += y; // z = z + y; 와 같다. / +부분에 다른 연산자를 선언해도 똑같이 작용한다.

	return 0;
}