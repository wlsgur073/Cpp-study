#include <iostream>
#include <fstream>

using namespace std;


int main()
{
	// try, catch, throw

	try
	{
		// something happend
		throw 1;
	}
	catch (int x)
	{
		cout << "Catch Integer " << x << endl;
	}
	catch (string error_message)
	{
		cout << error_message << endl;
	}

	return 0;
}