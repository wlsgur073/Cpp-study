#include <iostream>
// #include "Test.cpp" // 다른 cpp파일을 include할 수 있지만, 가급적 사용하지 않는다.
#include "Constants.h" // 헤더파일은 include한다.

using namespace std;

// int a = 1; // 여기서는 전역 변수로도 사용 가능하다.

// void doSomething()
// {
//  	static int a = 1; // 초기화가 한 번밖에 안된다. 즉, a = 1 선언된 후, 그 상태로 계속 {}안에 남는다.
//  	++a;
//  	cout << a << endl;
// }

int value = 123; // Global variable : (C언어 기준)main함수 밖에서 선언한다. 파일 안에서 가장 큰 범위 안에 저장한 변수.

// forward declaration // Test.cpp 파일 가져오기
void doSomething(); // 어딘가에 void doSomething()가 있으니 가져가 사용하라는 정의
// 위 선언은 extern void doSomething() 앞 extern이 생략된 것임

// extern int a; // 이미 test파일에 선언을 했는데 여기서도 변수 선언을 하면 프로그램 전체에서 봤을 때 중복되어 에러가 뜬다.
int main()
{
	// cout << a << endl;
	// doSomething(); // @1

	cout << "-------------------------------------------------------" << endl;
	cout << value << endl; // 전역 변수가 출력됨

	// int value = 1; // local variale : main{}를 벗어나면 메모리가 OS로 반납이 되고, 사용할 수 없게 된다.

	// cout << ::value << endl; // 콜론 ::을 붙혀서 전역 변수를 가져다 사용할 수 있다.
	// cout << value << endl;

	cout << "In mian.cpp file " << constants::pi << " " << &constants::pi << endl;
	doSomething();
	// 둘다 같은 constants 헤더파일에서 가져온 pi이지만, 주소가 다르다.

	return 0;
}