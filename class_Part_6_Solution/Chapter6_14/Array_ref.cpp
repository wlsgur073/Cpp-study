#include <iostream>
// 배열에도 ref를 쓸 수 있다.

using namespace std;

void doSome(int (&arr)[5])
{
	for (int i = 0; i < 5; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int array_ref()
{
	const int length = 5;
	int arr[length] = { 1,2,3,4,5 };
	
	doSome(arr);

	return 0;
}