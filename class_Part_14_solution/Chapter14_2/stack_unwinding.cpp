#include <iostream>

using namespace std;

void last()
{
	cout << "last " << endl;
	cout << "Throws exception" << endl;

	throw - 1;
	
	cout << "End last" << endl;
}

void third()
{
	cout << "Third" << endl;
	last();
	cout << "End Third" << endl;
}

void second()
{
	cout << "Second" << endl;

	try
	{
		third();
	}
	catch (double)
	{
		cerr << "Second caught int exception" << endl;
	}
	cout << "End Second" << endl;
}

void first()
{
	cout << "frist" << endl;

	try
	{
		second();
	}
	catch (int)
	{
		cerr << "first caught int exception" << endl;
	}
	cout << "End first" << endl;
}

int main()
{
	cout << "Start" << endl;

	try
	{
		first();
	}
	catch (int)
	{
		cerr << "main caught int exception" << endl;
	}

	// uncaught exceptions

	catch (...) // catch-all handlers
	{
		cerr << "main caught ellipses exception" << endl;
	}

	cout << "End main" << endl;
	return 0;
}