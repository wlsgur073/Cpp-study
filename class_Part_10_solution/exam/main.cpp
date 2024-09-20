#include <iostream>
#include <initializer_list>

using namespace std;

class IntArray
{
private:
	unsigned m_length = 0;
	int* m_data = nullptr;

public:
	IntArray(const int& length_in)
		: m_length(length_in)
	{
		m_data = new int[m_length];
	}

	IntArray(const initializer_list<int>& list)
		:IntArray(list.size())
	{
		int count = 0;
		for (auto& ele : list)
		{
			m_data[count] = ele;
			++count;
		}
	}

	IntArray& operator = (const IntArray& source)
	{
		if (this == &source) // prevent
			return *this;

		delete[] m_data;

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new int[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else { m_data = nullptr; }
	}

	IntArray& resize(const int& size)
	{
		if (m_length == size)
			return *this;
		else if (m_length < size)
		{
			int* temp = new int[size];

			for (int i = 0; i < m_length; ++i)
				temp[i] = m_data[i];
			for (int i = m_length; i < size; ++i)
				temp[i] = 0;

			m_length = size;
			delete[] m_data;
			m_data = temp;
		}
		else
		{
			m_length = size;
			int* temp = new int[size];
			for (int i = 0; i < m_length; ++i)
				temp[i] = m_data[i];

			delete[] m_data;
			m_data = temp;
		}
		return *this;
	}

	IntArray& insertBefore(const int& value, const int& ix)
	{
		resize(m_length + 1);

		for (int i = m_length - 1; i > ix; --i) // 1 3 5 7 9 0 // ix = 1 // 5 > 1
		{
			m_data[i] = m_data[i - 1]; // 0 -> 9, 
		}
		m_data[ix] = value; // 1, 10, 3, 5, 7, 9
		return *this;
	}

	void reset()
	{
		if (m_data != nullptr)
			delete[] m_data;
		m_data = nullptr;
		m_length = 0;
	}

	IntArray& remove(const int& idx)
	{
		//1 10 3 5 7 9
		//1 10 3 7 9
		for (int i = idx; i < m_length - 1; ++i)
			m_data[i] = m_data[i + 1];
		resize(m_length - 1);
		return *this;
	}

	IntArray& push_back(const int& value)
	{
		resize(m_length + 1);
		m_data[m_length - 1] = value;
		return *this;
	}

	~IntArray()
	{
		delete[] m_data;
	}

	friend ostream& operator << (ostream& out, IntArray& arr)
	{
		for (int i = 0; i < arr.m_length; ++i)
		{
			cout << arr.m_data[i] << " " ;
		}
		cout << endl;
		return out;
	}

};

int main()
{
	IntArray my_arr{ 1, 3, 5, 7 ,9 };
	cout << my_arr << endl;

	my_arr.insertBefore(10, 1);
	cout << my_arr << endl; // 1, 10, 3, 5, 7, 9
	
	my_arr.remove(3);
	cout << my_arr << endl;

	my_arr.push_back(13);		// 1 10 3 7 9 13
	cout << my_arr << endl;
	return 0;
}

//class
//constructors
//destructors
//initialize()
// overload operator = 
//reset()
//resize
//insertbefor(const int & value, const int& ix);
// remove(const int &ix)
// push_back(const int & value);