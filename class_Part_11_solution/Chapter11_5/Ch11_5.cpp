#include <iostream>

using namespace std;

class Base
{
public:
	int m_public;
protected:
	int m_pretected;
private:
	int m_private;
};

class Derived : private Base
{
public:
	Derived()
	{
		Base::m_public;
		Base::m_pretected;
	}
};

class GrandChild : public Derived
{
public:
	GrandChild()
	{
		//Derived::m_public;
	}
};

int main()
{
	Derived derived;

	return 0;
}