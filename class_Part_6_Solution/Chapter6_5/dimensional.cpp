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

	int array[num_rows][num_columns] // row-major <->column-major // 옛날 컴파일러는 뒤에 = 를 붙여줘야 한다.
	{
		{1, 2, 3, 4, 5},		// row 0
		{6, 7, 8, 9, 10},		// row 1
		{11, 12, 13, 14, 15}	// row 2
	}; // 마지막에 세미콜론 찍는거 잊지마라 // #2

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
// #1. 첫 배열의 원소 메모리주소 기준으로 1바이트(4비트)씩 증가하고 있는 것을 볼 수 있음.
// #1. 즉, 이차원처럼 보이지만, 실제로는 일차원이다. 동적 메모리할당할 때 아주 중요한 개념.
// #2
/* int array[][num_columns]	// row[]가 없어도 {}가 세 줄이기에 알아서 컴퍼일러가 세어준다.
{
	{1, 2, },				// 이렇게 column이 두 개만 입력되어 있을 경우, 빈 공간을 채우기 위해 나머지 3개의 숫자는 0으로 표시됨.
	{6, 7, 8, 9, 10},		
	{11, 12, 13, 14, 15}	
};*/
// int array[num_rows][num_columns] = { 0 }; // 전부 0 처리할수도 있음.