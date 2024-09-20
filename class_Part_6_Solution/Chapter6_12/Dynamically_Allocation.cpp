#include <iostream>

using namespace std;

int main()
{
	int length;
	cin >> length;

	// int *array = new int[length]; // 동적 할당 배열
	int *array = new int[length] {};
	array[0] = 1;
	// array[1] = 2; // overrun error

	for (int i = 0; i < length; ++i)
	{
		cout << (uintptr_t)&array[i] << endl;
		cout << array[i] << endl;
	}

	delete[] array; // new를 선언하면 어딘가에는 꼭 delete로 마무리를 지어줘야 한다!

	return 0;
}