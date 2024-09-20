#include <iostream>

using namespace std;


void printArray(int array[], const int length)
{
	for (int i = 0; i < length; ++i)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}


int main()
{
	// �˰���
	/*			value	index
	3 5 2 1 4	  1		  3		0��° ���ں��� ���� ���ڿ� ��ü���ش�. (������� ���ؾ���)
	1 5 2 3 4	  2		  2		1��° ���ں��� ���� ���ڸ� ��ü���ش�.
	1 2 5 3 4	  3		  3     2��° ���ں��� ���� ���ڸ� ��ü���ش�.
	1 2 3 5 4	  4		  4		...
	1 2 3 4 5
	*/

	/*const int length = 5;
	int array[length] = { 3, 5, 2, 4, 1 };
	int temp = 0;*/

	// 1��° ���
	/*for (int i = 0; i < length - 1; ++i)
	{
		for (int j = i + 1; j < length; ++j)
		{
			if (array[i] > array[j])
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
				printArray(array, length);
			}
		}
		
	}*/

	// swap : �迭�� ��ġ�� �ٲ� �� �ִ�.
	/*int temp = array[0];
	array[0] = array[1];
	array[1] = temp;*/
	// std::swap

	// 2��° ���

	const int length = 5;
	int array[length] = { 3, 5, 2, 4, 1 };
	int temp = 0;

	for (int start = 0; start < length - 1; ++start)
	{
		int small = start;

		for (int current = start + 1; current < length; ++current)
		{
			if (array[small] > array[current])
			{
				small = current;
			}
		}

		{
			temp = array[small];
			array[small] = array[start];
			array[start] = temp;
		}
		printArray(array, length);
	}
		
	return 0;
}