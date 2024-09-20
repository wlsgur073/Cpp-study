#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// array<int, 5> name; 
	// 정적 배열은 항상 배열 원소 범위를 적었어야 했다.
	// vector를 하면 그때그때 받을 수 있다(동적배열).

	vector<int> array = { 0,1,2,3 };
	vector<int> array2 = { 1,2,3,4,5 };
	
	array.resize(10);
	for (auto& itr : array)
		cout << itr << " ";
	cout << endl;

	for (auto& itr : array2)
		cout << itr << " ";
	cout << endl;

	return 0;
}