#include <iostream>

using namespace std;

void doSomething(double *ptr)
{
	if (ptr != nullptr)
	{
		//do somthing useful
		cout << *ptr << endl;
	}
	else
	{
		// do nothing with ptr
		cout << "Null ptr, do nothing" << endl;
	}
	cout << "Address of pointer varabible in doSomething()" << &ptr << endl;
}


int main()
{
	double * ptr{ nullptr }; // modern C++

	doSomething(ptr);
	doSomething(nullptr);

	double d = 123.4;

	doSomething(&d);
	
	ptr = &d;
	
	doSomething(ptr);

	cout << "Address of pointer varabible in main()" << &ptr << endl;
	// main 포인터와 dosomthing의 포인터 변수의 주소는 다르다.
	// 즉, main()의 double *ptr과 dosomething 파라미터 안의 ptr와 다르다!
	return 0;
}
