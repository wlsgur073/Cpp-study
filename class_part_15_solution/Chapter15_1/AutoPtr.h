#pragma once

#include <iostream>

template<class T>
class AutoPtr
{
public:
	T* m_ptr = nullptr;

public:
	AutoPtr(T *ptr = nullptr)
		:m_ptr(ptr)
	{}

	~AutoPtr()
	{
		if (m_ptr != nullptr) delete m_ptr;
	}

	// copy constructor
	AutoPtr(AutoPtr& a)
	{
		m_ptr = a.m_ptr;
		a.m_ptr = nullptr;
	}

	// copy assignment
	AutoPtr& operator = (AutoPtr& a)
	{
		if (&a == this)
			return *this;

		delete m_ptr;
		m_ptr = a.m_ptr;
		a.m_ptr = nullptr;
		return *this;
	}

	T& operator*() const { return *m_ptr; }
	T* operator->() const { return m_ptr; }
	bool inNull() const { return m_ptr == nullptr; }
};