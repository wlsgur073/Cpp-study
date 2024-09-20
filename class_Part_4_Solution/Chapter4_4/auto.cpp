#include <iostream>

// template이 auto보다 편리하다. 이후에 배움.

// auto add(int x, int y) -> int; // 이런 식으로도 입력&출력의 방식을 표현할 수 있다.
// auto add(int x, int y) -> double; // 보기 더 편리할 수 있다.

auto add(int x, int y) // int + int이기에 당연히 int로 자료형 추론이 이어짐
{
	return x + y;// return x + (double)y;인 경우는 double로 인식함
}

int main()
{
	auto a = 123;		// int로 인식함
	auto b = 2.0;		// double로 인식함
	auto c = 5 + 3.0;	// int + double이기에 double로 인식함

	int result = add(1, 2);

	return 0;
}