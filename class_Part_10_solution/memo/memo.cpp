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
	}

	void reset()
	{
		if (m_data != nullptr)
			delete[] m_data;
		m_data = nullptr;
		m_length = 0;
	}

	//IntArray& resize(const int& size)
	//{
	//	if (size > m_length)
	//	{
	//		IntArray temp(0);
	//		temp = (*this); // copy constrcutor
	//		reset();
	//		m_length = size;
	//		m_data = new int[m_length];
	//		for (int i = 0; i < temp.m_length; ++i)
	//		{
	//			this->m_data[i] = temp.m_data[i];
	//		}
	//		for (int i = temp.m_length; i < m_length; ++i)
	//		{
	//			m_data[i] = 0;
	//		}
	//	}
	//	else if (size < m_length)
	//	{
	//		int* temp = new int[size];
	//		for (int i = 0; i < size; ++i)
	//		{
	//			temp[i] = m_data[i];
	//		}
	//		reset();
	//		m_length = size;
	//		m_data = new int[m_length];
	//		for (int i = 0; i < size; ++i)
	//		{
	//			m_data[i] = temp[i];
	//		}
	//		delete[] temp;
	//	}
	//	return *this;
	//}

	~IntArray()
	{
		delete[] m_data;
	}

	friend ostream& operator << (ostream& out, IntArray& arr)
	{
		for (int i = 0; i < arr.m_length; ++i)
		{
			cout << arr.m_data[i] << " ";
		}
		cout << endl;
		return out;
	}

	void insertBefore(const int& value, const int& ix)
	{
		m_data[value] = ix;
	}

	//IntArray& remove(const int& ix)
	//{
	//	IntArray temp(m_length - 1);
	//	for (int i = 0; i < ix; ++i)
	//	{
	//		temp.m_data[i] = m_data[i]; // 0~4 0~5
	//	}

	//	for (int i = ix + 1; i < m_length; ++i)
	//	{
	//		temp.m_data[i - 1] = m_data[i];
	//	}
	//	resize(--m_length);
	//}

};

int main()
{
	IntArray my_arr{ 1, 3, 5, 7 ,9 };

	cout << my_arr << endl;
	my_arr.insertBefore(10, 1);	// 1, 10, 3, 5, 7, 9

	cout << my_arr << endl;
	// my_arr.remove(3)				// 1 10 3 7 9
	// my_arr.push_back(13);		// 1 10 3 7 9 13

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