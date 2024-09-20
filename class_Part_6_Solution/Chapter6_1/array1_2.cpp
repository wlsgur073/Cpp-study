#include <iostream>

using namespace std;

struct Ractangle // int 두 개 = 8bytes
{
	int length;
	int width;
};

int main()
{
	cout << sizeof(Ractangle) << endl;

	Ractangle rect_arr[10]; // 이런 식으로 구조체에 배열을 추가할 수 있다.
	cout << sizeof(rect_arr) << endl;
	
	/*int num_students = 0;
	cin >> num_students;

	int students_scores[num_students];*/ // run time에서 고정 값이 나오지 않으면 대입할 수 없다.
	// 그냥 바로 []에 고정값을 입력하는 식으로 해라!

	return 0;
}