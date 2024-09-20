#include <iostream>
#include "Constants.h"

// extern int a = 789456;
void doSomething()
{
	using namespace std;

	// cout << "Hello" << endl; // @1
	cout << "In test.cpp " << constants::pi << " " << &constants::pi << endl;

}