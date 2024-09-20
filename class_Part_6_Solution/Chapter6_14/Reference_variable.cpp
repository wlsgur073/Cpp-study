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

// #1. ���������� ref�� value�ϰ� ���� ����(�޸�)ó�� ���ȴ�.
// #2. ref�� ���� �����ϰ� ��µǴ°� �ƴ϶� ������ �޸� �ּҸ� �����޴´�.
// ��, ref�� �����Ų ������ �޸� �ּҿ� ref�� �޸� �ּҴ� ����.
// #3. int &ref or int &ref = 123;
// ref�� �ݵ�� �ʱ�ȭ�� �Ǿ�� �ϸ�, ������ ���� �� �ִ�.
// ���ͷ��� �������� �޸� �ּҸ� ���� ���ϱ� ����.

/*
int value = 5;
int *const ptr = &value; @1
int &ref = value; @2
@1 , 2�� ����� �����ϴ�.
*ptr = 10;
* ref = 10;
*/