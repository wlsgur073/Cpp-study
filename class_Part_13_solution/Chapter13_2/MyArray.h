#pragma once
#include <iostream>
#include <assert.h>


template<typename T>
class MyArray
{
private:
	int m_length;
	T* m_data;

public:
	MyArray()
	{
		m_length = 0;
		m_data = nullptr;
	}

	MyArray(int length)
	{
		m_data = new T[length];
		m_length = length;
	}

	~MyArray()
	{
		reset();
	}

	T& operator[](int index)
	{
		assert(index >= 0 && index < m_length);
		return m_data[index];
	}

	void reset()
	{
		delete[] m_data;
		m_length = 0;
		m_data = nullptr;
	}
	
	int getLength()
	{
		return m_length;
	}

	void print();
};
