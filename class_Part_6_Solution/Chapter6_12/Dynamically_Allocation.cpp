#include <iostream>

using namespace std;

int main()
{
	int length;
	cin >> length;

	// int *array = new int[length]; // ���� �Ҵ� �迭
	int *array = new int[length] {};
	array[0] = 1;
	// array[1] = 2; // overrun error

	for (int i = 0; i < length; ++i)
	{
		cout << (uintptr_t)&array[i] << endl;
		cout << array[i] << endl;
	}

	delete[] array; // new�� �����ϸ� ��򰡿��� �� delete�� �������� ������� �Ѵ�!

	return 0;
}