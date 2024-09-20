#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void printLength(array<int, 5> my_arr)
{
	cout << my_arr.size() << endl;
}

int main()
{
	//int array[5] = { 1,2,3,4,5 };

	array<int, 5> my_arr = { 1, 2, 3, 4, 5 };
	cout << my_arr.size() << endl;
	printLength(my_arr);

	for (auto& element : my_arr)
		cout << element << " ";
	cout << endl;

	array<int, 6> i = { 1,50,30,2,6,4 };
	sort(i.rbegin(), i.rend());
	for (auto& element : i)
		cout << element << " ";
	cout << endl;

	return 0;
}