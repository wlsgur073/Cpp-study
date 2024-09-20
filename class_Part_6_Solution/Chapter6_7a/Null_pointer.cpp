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
	// main �����Ϳ� dosomthing�� ������ ������ �ּҴ� �ٸ���.
	// ��, main()�� double *ptr�� dosomething �Ķ���� ���� ptr�� �ٸ���!
	return 0;
}
