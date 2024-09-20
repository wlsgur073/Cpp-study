#include <iostream>

using namespace std;

int main()
{
	int a;

	a = 150;
	int* b = &a;
	int** c = &b;

	cout << &a << endl;
	cout << &b << endl;
	cout << b << endl;
	cout << *b << endl;
	cout << "이중포인터 c결과 값" << endl;
	cout << c << endl;
	cout << **c << endl;
}
