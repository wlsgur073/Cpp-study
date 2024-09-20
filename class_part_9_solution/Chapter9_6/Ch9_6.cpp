#include <iostream>
#include <cassert>

using namespace std;

class IntList
{
private:
	int m_list[10];

public:
	int& operator [] (const int index)
	{
		assert(index >= 0);
		assert(index < 10);

		return m_list[index];
	}
	const int& operator [] (const int index) const
	{
		assert(index >= 0);
		assert(index < 10);

		return m_list[index];
	}
};

int main()
{
	IntList* list = new IntList;

	// list->operator[]

	// list[3] = 10;

	(*list)[3] = 10;
	cout << (*list)[1] << endl;

	return 0;
}