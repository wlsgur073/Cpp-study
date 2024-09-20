#include <iostream>
#include <vector>
#include <algorithm>
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
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	friend bool operator < (const Fraction& c1, const Fraction& c2)
	{
		return c1.m_cents < c2.m_cents;
	}

	friend std::ostream& operator << (std::ostream& out, const Fraction& cents)
	{
		out << cents.m_cents;
		return out;
	}
};

int main()
{
	vector<Fraction> arr(20);
	for (unsigned i = 0; i < 20; ++i)
		arr[i].getCents() = i;

	std::random_shuffle(begin(arr), end(arr));

	for (auto& e : arr)
		cout << e << " ";
	cout << endl;

	std::sort(begin(arr), end(arr));
	for (auto& e : arr)
		cout << e << " ";
	cout << endl;

	return 0;
}