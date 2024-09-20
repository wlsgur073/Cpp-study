#include <iostream>
// 구조체나 class에 사용할 때는
// 포인터와 참조를 통해서 각각의 맴버를 찾을 수 있다.
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
	ptr->age = 30; // 주로 이걸 씀
	(*ptr).age = 20; // 이건 잘 안씀

	// ref and ptr
	Person& ref2 = *ptr;
	ref2.age = 45;

	return 0;
}