#include <iostream>
#include "Header.h"

using namespace std;

void test();


int main()
{

	cout << "in main cpp " << con::a << " " << &con::a << endl;
	test();

}