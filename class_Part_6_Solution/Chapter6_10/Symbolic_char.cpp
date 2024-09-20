#include <iostream>

using namespace std;

int main()
{
	// char name[] = "Jack jack";
	// char *name = "Jack Jack"; // 주석1
	
	const char *name = "Jack Jack";
	const char* name2 = "Jack Jack";

	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl; // 주석2

	return 0;
}

// #1. 실제로 문자열이 담길 메모리를 어디서 만들것인가는 아무런 정보가 없다.
// 포인터에는 담을 수 없다. 포인터는 메모리의 주소를 가리키는 것만 한다.
// 그럼에도 불구하고, 해당 문자열을 기호적인 상수로 사용하는 방법이 있다. -> const사용

// #2. 문자열이 같을 경우, 컴파일러가 자동으로 같은 주소를 호출할수도 있다.
// 이러한 경우, 한 문자열의 리터럴 형태를 바꾸면 주소도 자른 주소로 할당된다.