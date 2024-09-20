#include <iostream>
#include <cstdlib>	// #1. std::radn(), std:: srand() ��� ����
#include <ctime>	// #2. std::time()
#include <random>	// #3 ���� ��� �� �̰Ŵ�. ���� �ִ� �� �ʹ� ��ƴ�.

using namespace std;

//unsigned int PRNG() // Pseudo Random Number Generator
//{
//	static unsigned int seed = 5523; // seed number(�����ϴ� ����)
//
//	seed = 8253729 * seed + 2396403; // unsigend �����÷ο츦 ���� �ִ�.
//
//	return seed % 32768; // ������ �����ڷ� �ִ� ũ�� ������ �������� ����ϵ��� �ϰ� �ִ�. ������ ��쿡�� ��.
//} // ���� �ѹ��� ���Ǵ� ����.

int main()
{
	// srand(5323);
	// rand �տ� s�� seed�� ����. ��, seed�� �����Ѵٴ� ����.
	// seed �ѹ��� �����Ǿ� ���� ���� ���� ���ڵ� �����ϰ� ��.
	// ������� �� ����, seed�� ���� ���� �ִ� �� ����. ���� ���ڰ� ������ ����뵵 ��������.

	// std::srand(static_cast<unsigned int>(std::time(0)));
	// �ð��� ��� °��°�� �ٲ�ϱ�, seed ���� ��� �ٲ�� �� ���̴�.

	/*for (int i = 1; i <= 100; ++i)
	{
		cout << std::rand() << "\t";

		if (i % 5 == 0)
			cout << endl;
	}*/

	std::random_device rd;
	std::mt19937 mersenne(rd()); // create a mesenne twister // 32bits
	std::uniform_int_distribution<> dice(1, 6); // 1���� 6����, 1,2..6�� ���� Ȯ���� �����ϰ� ����.
	// std::mt19937_64 // 64��Ʈ�� ������ ��������.
	// ���� ���� :
	// 1) random_device�� �����.
	// 2) ���� ����̽��� �־ �����⸦ �����.
	// 3) �����Ⱑ � ����(uniform_distribution)�� ������ ���ؼ� ������ �����.
	for (int count = 1; count <= 20; ++count)
		cout << dice(mersenne) << endl;

	return 0;
}