#include <iostream>
#include <memory>

using namespace std;

class A
{
public:
	~A()
	{
		throw "error";
	}
};

int main()
{
	try
	{
		A a;
	}
	catch (...)
	{
		cout << "Catch" << endl;
	}
	return 0;
}