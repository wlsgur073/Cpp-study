#include <iostream>

using namespace std;

// void doSomething 파라미터 안에 있는 배열은 문법상 배열이 아니고 포인터이다.
// 다만, 배열을 받을 때 사용을 할 것이라는 것을 명확하게 보여주기 위해서 코딩이 가능한 것뿐,
// 내부 시스템에서는 파라미터 안을 포인터로 인식한다.
void doSomething(int studnet_score[20]) // 주석#2
{
	cout << (size_t)&studnet_score << endl;	// 여기 doSomething 안에 매개변수 사용되고 있는 // 주석#3 // @1
	cout << studnet_score[0] << endl;		// 이것들은 배열이 아니고 포인터 변수이다.
	cout << studnet_score[1] << endl;
	cout << studnet_score[2] << endl;
	cout << "Size in doSomething " << sizeof(studnet_score) << endl;
}


int main()
{
	const int num_student = 20;
	int studnet_score[num_student] = { 1, 2, 3, 4, 5, }; // 주석 #1 // @2

	cout << (size_t)&studnet_score << endl; // doSomething의 주소와 다르다.
	cout << &studnet_score[0] << endl;
	cout << studnet_score[1] << endl;
	cout << studnet_score[2] << endl;
	cout << "Size in main " << sizeof(studnet_score) << endl;

	doSomething(studnet_score); // 주석#2 

	return 0;
}

// 배열은 변수 자체가 주소로 사용된다. ex.) 위 student_score은 주소로 인식된다.
// #1. 선언될 때, 바로 배열로 선언되서 변수자체가 주소이기에 주소연산자(&)가 없어도 출력 가능.
// #2. main{} 안에 있는 doSomething() 안에 있는 student_score의 주소 값을 받아서
// #2. 위 void doSomething 파라미터 안에 있는 배열처럼 보이는 포인터가 사용한다.
// #2. main () doSomething(student_score) 주소 복사 -> void doSomething(int student_score[20])
// #2. 배열의 모든 원소를 복사해서 가져오는 것이 아니라, 첫 번째 주소 값만 복사한다.
// #3. void doSomething 안에 선언이 되어 있는 매개 변수 (int)&studnet_score는 배열이 아니고,
// #3. 포인터 변수이다. 어떤 포인터 변수냐!
// #3. main 안에 있는 doSomething(student_score)의 주소값을 받은 포인터 변수이기 때문에 그 자체가 다른 주소값을 갖는다.
// #3. 주소값을 저장하는 다른 변수이기 때문에 다른 변수의 주소가 필요하다.
// 그래서 @1과 @2가 다른 주소값을 가진다.
// 그렇지만 main 안에 있는 dosomething(student_score)에서 받아온 첫 번째 주소값을 찍어내면 같은 주소값이 나온다.
// 32비트에서는 포인터 사이즈가 4바이트, 64비트에서는 8바이트