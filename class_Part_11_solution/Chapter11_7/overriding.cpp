#include <iostream>

using namespace std;

class Base
{
protected:
	int m_i;
public:
	Base(int value)
		: m_i(value)
	{}
	void print()
	{
		cout << "I'm base" << endl;
	}
	friend ostream& operator << (ostream& out, const Base& b)
	{
		out << "I'm base output" << endl;
		return out;
	}
};

class Derived : public Base
{
private:
	double m_d;
public:
	Derived(int value)
		:Base(value)
	{}

	void print()
	{
		Base::print();
		cout << "i'm derived" << endl;
	}

	friend ostream& operator << (ostream& out, const Derived& c)
	{
		cout << static_cast<Base>(c);
		out << "I'm Derived output" << endl;
		return out;
	}
};

int main()
{
	Base base(5);
	cout << base;

	Derived derived(7);
	cout << derived;
	return 0;
}