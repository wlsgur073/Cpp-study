#include <iostream>
#include <cstdlib>	// #1. std::radn(), std:: srand() 사용 가능
#include <ctime>	// #2. std::time()
#include <random>	// #3 오늘 배울 건 이거다. 위에 있는 건 너무 어렵다.

using namespace std;

//unsigned int PRNG() // Pseudo Random Number Generator
//{
//	static unsigned int seed = 5523; // seed number(시작하는 숫자)
//
//	seed = 8253729 * seed + 2396403; // unsigend 오버플로우를 쓰고 있다.
//
//	return seed % 32768; // 나머지 연산자로 최대 크기 숫자의 나머지를 출력하도록 하고 있다. 간단한 경우에만 씀.
//} // 랜덤 넘버가 사용되는 원리.

int main()
{
	// srand(5323);
	// rand 앞에 s는 seed를 말함. 즉, seed를 설정한다는 것임.
	// seed 넘버가 고정되어 있을 때는 랜덤 숫자도 동일하게 뜸.
	// 디버깅을 할 때는, seed에 고정 값을 주는 게 좋다. 같은 숫자가 나오니 디버깅도 쉬워진다.

	// std::srand(static_cast<unsigned int>(std::time(0)));
	// 시간은 계속 째각째각 바뀌니까, seed 값도 계속 바뀌게 될 것이다.

	/*for (int i = 1; i <= 100; ++i)
	{
		cout << std::rand() << "\t";

		if (i % 5 == 0)
			cout << endl;
	}*/

	std::random_device rd;
	std::mt19937 mersenne(rd()); // create a mesenne twister // 32bits
	std::uniform_int_distribution<> dice(1, 6); // 1포함 6이하, 1,2..6이 나올 확률이 동일하게 나옴.
	// std::mt19937_64 // 64비트의 난수를 생성해줌.
	// 구조 설명 :
	// 1) random_device를 만든다.
	// 2) 랜덤 디바이스를 넣어서 생성기를 만든다.
	// 3) 생성기가 어떤 분포(uniform_distribution)를 따를지 정해서 분포를 만든다.
	for (int count = 1; count <= 20; ++count)
		cout << dice(mersenne) << endl;

	return 0;
}