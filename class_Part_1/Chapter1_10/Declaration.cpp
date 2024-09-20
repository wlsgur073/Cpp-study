#include <iostream>

using namespace std;

int add(int i, int j); // #2 변수의 최소 정보만 앞으로 가져오면 사용 가능
int subtract(int i, int j); // #2처럼 하는 것을 forward declaration 전방 선언 이라 함
int multiply(int i, int j);

int main()
{
	cout << add(2, 2) << endl; // #1 컴파일은 위에서 아래로 읽기에 밑 add 못 읽음
	cout << subtract(6, 4) << endl;
	cout << multiply(3, 3) << endl;
	
	return 0;
}

// definition 정의
int add(int i, int j)
{
	return i + j;
}

int subtract(int i, int j)
{
	return i - j;
}

int multiply(int i, int j)
{
	return i * j;
}