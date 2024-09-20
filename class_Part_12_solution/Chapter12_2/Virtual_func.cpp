#include <iostream>
using namespace std;

class A
{
public:
	virtual void print() { cout << "A" << endl; }
};

class B : public A
{
public:
	virtual void print() { cout << "B" << endl; }
};

class C : public B
{
public:
	virtual void print() { cout << "C" << endl; }
};
class D : public C
{
public:
	virtual void print() { cout << "D" << endl; }
};

int main()
{
	A a;
	B b;
	C c;
	D d;

	A& ref = c;
	ref.print();
	
	cout << "a address : " << &a << endl;
	cout << "어드레스 : " << &c << endl;


	return 0;
}