#include <iostream>

using namespace std;

int main()
{
	const int num_rows = 3;
	const int num_columns = 5;

	for (int row = 0; row < num_rows; ++row)
	{
		for (int col = 0; col < num_columns; ++col)
			cout << '[' << row << ']' << '[' << col << ']' << '\t';

		cout << endl;
	}
	cout << endl;

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////

	int array[num_rows][num_columns] // row-major <->column-major // ���� �����Ϸ��� �ڿ� = �� �ٿ���� �Ѵ�.
	{
		{1, 2, 3, 4, 5},		// row 0
		{6, 7, 8, 9, 10},		// row 1
		{11, 12, 13, 14, 15}	// row 2
	}; // �������� �����ݷ� ��°� �������� // #2

	for (int row = 0; row < num_rows; ++row)
	{
		for (int col = 0; col < num_columns; ++col)
		{
			//cout << array[row][col] << '\t';
			cout << (int)&array[row][col] << '\t'; // #1
		}
		cout << endl;
	}
	cout << endl;


	return 0;
}
// #1. ù �迭�� ���� �޸��ּ� �������� 1����Ʈ(4��Ʈ)�� �����ϰ� �ִ� ���� �� �� ����.
// #1. ��, ������ó�� ��������, �����δ� �������̴�. ���� �޸��Ҵ��� �� ���� �߿��� ����.
// #2
/* int array[][num_columns]	// row[]�� ��� {}�� �� ���̱⿡ �˾Ƽ� �����Ϸ��� �����ش�.
{
	{1, 2, },				// �̷��� column�� �� ���� �ԷµǾ� ���� ���, �� ������ ä��� ���� ������ 3���� ���ڴ� 0���� ǥ�õ�.
	{6, 7, 8, 9, 10},		
	{11, 12, 13, 14, 15}	
};*/
// int array[num_rows][num_columns] = { 0 }; // ���� 0 ó���Ҽ��� ����.