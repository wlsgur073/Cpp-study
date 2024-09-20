#include <iostream>
// ����ü�� class�� ����� ����
// �����Ϳ� ������ ���ؼ� ������ �ɹ��� ã�� �� �ִ�.
using namespace std;

struct Person
{
	int age;
	double weight;
};

int main()
{
	// Normal
	Person ps;

	ps.age = 5;
	ps.weight = 30;

	// &ref
	Person &ref = ps;
	ref.age = 15;

	// Pointer
	Person *ptr = &ps;
	ptr->age = 30; // �ַ� �̰� ��
	(*ptr).age = 20; // �̰� �� �Ⱦ�

	// ref and ptr
	Person& ref2 = *ptr;
	ref2.age = 45;

	return 0;
}