#include <iostream>
#include "Header.h"
#include <typeinfo>


extern void test()
{
	using namespace std;

	cout << "in test cpp " << con::a << " " << &con::a << endl;
}