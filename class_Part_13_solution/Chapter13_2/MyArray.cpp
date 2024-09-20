#include "MyArray.h"

template<typename T>
void MyArray<T>::print()
{
	for (int i = 0; i < m_length; ++i)
		std::cout << m_data[i] << " ";
	std::cout << std::endl;
}

//explicit instantiation
template class MyArray<char>;
template class MyArray<double>;

//explicit instantiation
//template void MyArray<char, 'a'>::print();
//template void MyArray<double, 100>::print();