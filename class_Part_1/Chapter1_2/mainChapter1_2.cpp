#include <iostream>

int main(void)
{
	int x = 123; // initializtion, 초기 값부터 123으로 설정한 것.
	//int x(123)로 표현할 수 있음
	x = 5; //assignment, x에 5를 입력한 것을 개체지향에서 위와 다르다.

	std::cout << x << std::endl;

	return 0;
}