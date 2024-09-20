#include <iostream>

using namespace std;

void doSomething(int n)
{
	cout << &n << endl;
	n = 10;
	cout << "In doSomething " << n << endl;
}

int main()
{
	/*
	int value = 5;

	int* ptr = nullptr;
	ptr = &value;

	int &ref = value; // #1
	
	cout << &value << endl;
	cout << &ref << endl;
	cout << ptr << endl;
	cout << &ptr << endl; // #2

	cout << ref << endl;
	
	ref = 10; // *ptr = 10;

	cout << value << " " << ref << endl;
	*/
	///////////////////////////////////////////////////////////////

	int n = 5;

	cout << &n << endl;
	
	doSomething(n);
	
	cout << n << endl;



	return 0;
}

// #1. 내부적으로 ref가 value하고 같은 변수(메모리)처럼 사용된다.
// #2. ref는 값만 동일하게 출력되는게 아니라 변수의 메모리 주소를 공유받는다.
// 즉, ref와 연결시킨 변수의 메모리 주소와 ref의 메모리 주소는 같다.
// #3. int &ref or int &ref = 123;
// ref는 반드시 초기화가 되어야 하며, 변수만 받을 수 있다.
// 리터럴은 공식적인 메모리 주소를 갖지 못하기 때문.

/*
int value = 5;
int *const ptr = &value; @1
int &ref = value; @2
@1 , 2의 기능이 동일하다.
*ptr = 10;
* ref = 10;
*/