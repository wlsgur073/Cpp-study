#include <iostream>

using namespace std;

int main()
{
	/*
	int value = 7;
	int * ptr = &value;
	
	cout << uintptr_t(ptr - 1) << endl;
	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr + 1) << endl;
	cout << uintptr_t(ptr + 2) << endl; // 주석1. 포인터 연산
	*/

	// memory leak 메모리 누수
	// 메모리를 쓰지는 않고 계속 만들기만 하는 것.
	// 심지어 메모리가 어디 있는지도 알 수가 없는 상태

	while (true)
	{
		int *ptr = new int;
		cout << ptr << endl;
	} // 여기에 오면 ptr 변수가 사라진다.

	// 문제가 있는지 파악하는 방법 1
	// 할당받는 메모리 데이터가 클 경우
	// task manager(작업 관리자) -> CPU 확인 & process
	// 메모리가 무한히 올라간다면 문제가 있다는 것임.
	// diagnostic tools 여는 법 : debug -> windows -> show diagnostic tools
	
	// 해결법 : while 마지막에 delete ptr;를 넣으면 규칙적으로 반복문을 생성해낸다.
	// 프로그래밍을 잘하려면 new와 delete를 적게 사용하는 것이 좋다.

	return 0;
}

// uintptr_t는 16진수 포인터를 10진수로 표현하는 방법.
// (int)변수를 통해서 호출해내는 방법하고 같다.
// 다른 점은 uintptr_t를 쓰면, 데이터 타입이 int가 아닌 다른 것이어도 10진수로 바꿔준다.
// #1. 데이터 타입(int, double ..)의 bytes 값만큼 고정값에서 이동한다.
