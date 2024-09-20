#include <iostream>

#define LIKE_APPLE

void doSomething()
{
	using namespace std;
	// 헤더파일에 std를 아무데나 넣어버리면 include하는 파일들도
	// 모두 std사용한다는 의미로 받아들일 수 있다.

#ifdef LIKE_APPLE
	cout << "APPLE" << endl;
#else
	cout << "ORANGE" << endl;
#endif

}