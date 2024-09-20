#pragma once
#include <iostream>

class Resource
{
public:
	int m_data[100];
public:
	Resource()
	{
		std::cout << "Resource constrcted" << std::endl;
	}

	~Resource()
	{
		std::cout << "Resource destroyted" << std::endl;
	}
};