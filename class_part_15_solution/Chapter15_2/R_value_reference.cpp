#include <iostream>

using namespace std;

void doSomething(int& Lref)
{
	cout << "L-value ref" << endl;
}

void doSomething(int&& Rref)
{
	cout << "R-value ref" << endl;
}

int getResult()
{
	return 100 * 100;
}

int main()
{
	int x = 5;
	int y = getResult();
	const int cx = 6;
	const int cy = getResult();

	// L-value reference

	int& lr1 = x;			// Modifiable L-value
	//int& lr2 = cx;			// Non-modifiable L-value
	//int& lr3 = 5;			// R-value

	const int& lr4 = x;		// Modifiable L-value
	const int& lr5 = cx;	// Non-modifiable L-value
	const int& lr6 = 5;		// R-value
	
	// R-value reference

	//int&& rr1 = x;				// Modifiable L-value
	//int&& rr2 = cx;				// Non-modifiable L-value
	int&& rr3 = 5;				// R-value


	//const int&& rr4 = x;		// Modifiable L-value
	//const int&& rr5 = cx;		// Non-modifiable L-value
	const int&& rr6 = 5;		// R-value


	return 0;
}