#include <iostream>

using namespace std;

// 제곱 구하는 방식.
int pow(int base, int exponent)
{
	int result = 1;
	
	for (int count = 0; count < exponent; ++count)
	{
		result *= base;
	}
	return result;
}

// base = 3, exponent = 3일 경우, count는 exponent의 값 3번을 반복할 것이다.
// 첫 for은 result(1) * base(3)으로 3이 나오고, 두번째는 result(3) * base(3)으로 9가 나온다.
// 이렇게 3의 3제곱 27를 구한 다음, return 값으로 27 값을 main에서 받을 수 있게 된다.

int main()
{

	int count = 0;
	for (; count < 10; ++count)
	// while(true) // 무한 루프
	// for(;true;++count) // while처럼 무한루프 사용 가능, true없어도 작동함.
	{
		cout << count << endl;
	}
	cout << count << endl;


	return 0;
}