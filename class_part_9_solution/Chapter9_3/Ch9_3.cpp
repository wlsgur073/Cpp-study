#include <iostream>
#include <fstream>

using namespace std;

class Fraction
{
private:
	int m_cents;
public:
	Fraction(int cents = 0)
	{
		m_cents = cents;
	}
	int getCents() const	{return m_cents;}
	int& getCents()	{return m_cents;}

	Fraction operator - () const
	{
		return Fraction(-m_cents);
	}

	int operator - ()
	{
		return -this->m_cents;
	}

	bool operator ! () const
	{
		return(m_cents == 0) ? true : false;
	}

	friend std::ostream& operator << (std::ostream& out, Fraction& cents)
	{
		out << cents.m_cents;
		return out;
	}
};

int main()
{
	Fraction cents1(6);
	Fraction cents2(0);

	cout << cents1 << endl;
	cout << -cents1 << endl;
	cout << -Fraction(-10) << endl;
	cout << -(-(Fraction(10))) << endl;
	cout << -(-(-cents1)) << endl;

	auto temp = !cents1;

	return 0;
}