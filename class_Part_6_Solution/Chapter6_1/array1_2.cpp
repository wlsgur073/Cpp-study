#include <iostream>

using namespace std;

struct Ractangle // int �� �� = 8bytes
{
	int length;
	int width;
};

int main()
{
	cout << sizeof(Ractangle) << endl;

	Ractangle rect_arr[10]; // �̷� ������ ����ü�� �迭�� �߰��� �� �ִ�.
	cout << sizeof(rect_arr) << endl;
	
	/*int num_students = 0;
	cin >> num_students;

	int students_scores[num_students];*/ // run time���� ���� ���� ������ ������ ������ �� ����.
	// �׳� �ٷ� []�� �������� �Է��ϴ� ������ �ض�!

	return 0;
}