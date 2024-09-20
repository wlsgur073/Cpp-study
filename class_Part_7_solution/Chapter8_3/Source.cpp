#include <iostream>
#include <vector>

using namespace std;

class IntArray
{
private:
	int* m_arr = nullptr;
	int m_length = 0;

public:
	IntArray(const int length_in)
	{
		m_length = length_in;
		m_arr = new int[m_length];
	}
	int getLength() { return  m_length; }

	~IntArray()
	{
		delete[] m_arr;
	}
};

int main()
{
	while (true)
	{
		IntArray my_int_arr(10000);
	}

	return 0;
}