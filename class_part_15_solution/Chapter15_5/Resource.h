#pragma once
#include <iostream>

class Resource
{
public:
	int* m_data = nullptr;
	unsigned m_length = 0;
public:
	Resource()
	{
		std::cout << "Resource default constrcted" << std::endl;
	}

	Resource(unsigned length)
	{
		std::cout << "Resource length constrcted" << std::endl;
		this->m_data = new int[length];
		this->m_length = length;
	}

	Resource(const Resource& res) // deep copy
	{
		std::cout << "Resource copy constrcted" << std::endl;

		for (unsigned i = 0; i < m_length; ++i)
			m_data[i] = res.m_data[i];
	}

	~Resource()
	{
		std::cout << "Resource destroyed" << std::endl;
		if (m_data != nullptr)
			delete[] m_data;
	}

	Resource& operator = (Resource& res)
	{
		std::cout << "Resource copy constrcted" << std::endl;

		if (&res == this) return *this;

		if (this->m_data != nullptr)
			delete[] m_data;

		m_length = res.m_length;
		m_data = new int[m_length];

		for (unsigned i = 0; i < m_length; ++i)
			m_data[i] = res.m_data[i];

		return *this;
	}

	void print()
	{
		for (unsigned i = 0; i < m_length; ++i)
			std::cout << m_data[i] << " ";
		std::cout << std::endl;
	}

	void setAll(const int& v)
	{
		for (unsigned i = 0; i < m_length; ++i)
			m_data[i] = v;
	}
};