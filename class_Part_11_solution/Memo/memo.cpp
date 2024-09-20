#include <iostream>
#include <initializer_list>

using namespace std;

class intArray
{
private:
	int m_length;
	int* m_data;

public:
	intArray(const int& length_in)
		: m_length(length_in)
	{
		m_data = new int[m_length];
	}

	intArray(const initializer_list<int>& list)
		:intArray(list.size())
	{
		int count = 0;
		for (auto& ele : list)
		{
			m_data[count] = ele;
			++count;
		}
	}

	intArray& operator = (const intArray& source)
	{
		if (this == &source)
			return *this;

		delete[] m_data;

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new int[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;

		return *this;
	}

	intArray& resize(const int& length_in)
	{
		if (m_length == length_in)
			return *this;

		else if (m_length < length_in)
		{
			int* temp = new int[length_in];

			for (int i = 0; i < m_length; ++i)
				temp[i] = m_data[i];
			for (int j = m_length; j < length_in; ++j)
				temp[j] = 0;
			
			delete[] m_data;
			m_length = length_in;
			m_data = temp;
		}
		else
		{
			m_length = length_in;

			int* temp = new int[length_in];
			for (int i = 0; i < length_in; ++i)
				temp[i] = m_data[i];

			delete[] m_data;
			m_data = temp;
		}

		return *this;
	}

	intArray& insertBefore(const int& ix, const int& value)
	{
		resize(m_length + 1);
		
		for (int i = m_length - 1; i > ix; --i)
		{
			m_data[i] = m_data[i - 1];
		}

		m_data[ix] = value;
		return *this;
	}

	void reset()
	{
		if (m_data != nullptr)
			delete[] m_data;
			m_length = 0;
			m_data = nullptr;
	}

	intArray& remove(const int& input)
	{
		for (int i = input; i < m_length; ++i)
		{
			m_data[i] = m_data[i + 1];
		}

		resize(m_length - 1);

		return *this;
	}

	intArray& push_back(const int& length_in)
	{
		resize(m_length + 1);
		m_data[m_length - 1] = length_in;
		return *this;
	}

	~intArray()
	{
		delete[] m_data;
	}

	friend ostream& operator << (ostream& out, const intArray& arr)
	{
		for (int i = 0; i < arr.m_length; ++i)
		{
			out << arr.m_data[i] << " ";
		}
		cout << endl;
		return out;
	}
};

//push_back

int main()
{
	intArray arr{ 1,3,5,7,9 }; // 1 3 5 7 9
	cout << arr << endl;
	
	arr.insertBefore(1, 10);
	cout << arr << endl;

	arr.remove(3);
	cout << arr << endl;

	arr.push_back(13);
	cout << arr << endl;

	// push back(13) // 1 10 3 7 9 13
	return 0;
}