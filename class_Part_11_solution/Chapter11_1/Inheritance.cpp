#include <iostream>

using namespace std;

class Mother
{
private:
	int m_i;
public:
	Mother(const int& i_in)
		: m_i(i_in)
	{
		cout << "Mother construcotr" << endl;
	}
	void setValue(const int& i) { m_i = i; }
	int getValue() { return m_i; }
};

class Child : public Mother
{
private:
	double m_d;
public:
	Child(const int& i_in, const double & d_in)
		:Mother(i_in),m_d(d_in)
	{}

	void setValue(const int& i_in, const double& d_in)
	{
		Mother::setValue(i_in);
		m_d = d_in;
	}
	void getValue(const double& d_in) { m_d = d_in; }

	double getValue() { return m_d; }
};

int main()
{
	Mother mom(1024);
	mom.setValue(2021);
	cout << mom.getValue() << endl;
	
	Child child(1024, 128);
	cout << child.getValue() << endl;

	return 0;
}