#include <iostream>

using namespace std;

namespace work1 // #3. 이런 식으로 영역을 확실하게 분리할 수 있다.
{
	int a = 1;
	void doSomething()
	{
		a += 3;
		cout << a << endl;
	}
}

namespace work2
{
	int a = 1; // #1. 같은 함수는 사용할 수 없다!
	void doSomething(int b) // #2. 함수가 같은데 파라미터가 다르면 충돌이 생기지 않는다!
	{
		a += 5;
		cout << a << endl;
	}
}

int main()
{
	 
	// Scope의 개념 이해하기

	int apple = 5;

	cout << apple << endl;
	{
		int apple = 1; // 이름은 같지만 위 apple과 완전히 다른 존재, 그러니 이름을 다르게 지어라
		cout << apple << endl; // 이 apple은 {}안에서만 살아있다.
	}
	cout << apple << endl; // 여기의 apple은 가장 첫 번째 apple이다.

	cout << "namespace의 값 출력문" << endl;
	work1::doSomething();
	work2::doSomething(1);

	return 0;
}