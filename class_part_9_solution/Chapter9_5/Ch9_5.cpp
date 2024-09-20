#include <iostream>

using namespace std;

class Digit
{
private:
	int m_digit;
public:
	Digit(int digit = 0) : m_digit(digit) {}

	//prefix (전위)
	Digit& operator ++()
	{
		++m_digit;
		return *this; // 자기 자신을 리턴한다.
	}

	// postfix
	Digit operator ++(int)// ()안에 더미가 있으면 후위
	{
		Digit temp(m_digit);
		++(*this);
		return temp;
	}

	friend ostream& operator << (ostream& out, const Digit& d)
	{
		out << d.m_digit;
		return out;
	}
};


int main()
{
	Digit d(5);

	cout << ++d << endl;
	cout << d << endl;
	
	cout << d++ << endl;
	cout << d << endl;

	return 0;
}