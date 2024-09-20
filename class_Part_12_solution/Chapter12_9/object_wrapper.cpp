#include <iostream>

using namespace std;

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << "I'm Base" << endl;
	}
};

class Derived : public Base
{
public:
	int m_j = 0;

	virtual void print() override
	{
		cout << "I'm Derived" << endl;
	}
};

void doSomething(Base& b)
{
	b.print();
}

int main()
{
	Derived d;
	Base b = d;
	
	b.print();

	return 0;
}