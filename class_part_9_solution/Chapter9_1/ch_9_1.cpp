#include <iostream>

using namespace std;

class Fraction
{
private:
	int m_cents;
public:
	Fraction(int cents = 0)
	{
		m_cents = cents; // int로 받는 생성자
	}
	int getCents() const // 외부와 access하기 위해서
	{
		return m_cents;
	}
	int& getCents()
	{
		return m_cents;
	}
	Fraction operator + (const Fraction& c2)
	{
		return Fraction(this->m_cents + c2.m_cents);
	}
};

//Cents operator + (const Cents& c1, const Cents& c2)
//{
//	return Cents(c1.getCents() + c2.getCents());
//}

int main()
{
	Fraction cents1(6);
	Fraction cents2(8);
	
	/*Cents sum;
	add(cents1, cents2, sum);*/

	//cout << add(cents1, cents2).getCents() << endl;

	cout << (cents1 + cents2 + Fraction(6)).getCents() << endl;
	return 0;
}