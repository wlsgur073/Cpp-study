#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// array<int, 5> name; 
	// ���� �迭�� �׻� �迭 ���� ������ ������� �ߴ�.
	// vector�� �ϸ� �׶��׶� ���� �� �ִ�(�����迭).

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