#include <iostream>

class Cents
{
private:
	int m_cents;
public:
	Cents(int cents)
		: m_cents(cents)
	{}

	friend bool operator > (const Cents& c1, const Cents& c2)
	{
		return (c1.m_cents > c2.m_cents);
	}

	friend std::ostream& operator << (std::ostream& out, const Cents& cents)
	{
		out << cents.m_cents<< " cents";
		return out;
	}
};

template<typename T> // <class name>µµ °¡´É
T getMax(T x, T y)
{
	return (x > y) ? x : y;
}

// char, short ...

int main()
{
	std::cout << getMax(1, 2) << std::endl;
	std::cout << getMax(3.14, 1.592) << std::endl;
	std::cout << getMax(1.0f, 6.4f) << std::endl;
	std::cout << getMax('a', 'c') << std::endl;

	std::cout << getMax(Cents(5), Cents(9)) << std::endl;
	
	
	return 0;
}