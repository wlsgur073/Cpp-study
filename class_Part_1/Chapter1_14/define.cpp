#include <iostream>

#define LIKE_APPLE

void doSomething()
{
	using namespace std;
	// ������Ͽ� std�� �ƹ����� �־������ include�ϴ� ���ϵ鵵
	// ��� std����Ѵٴ� �ǹ̷� �޾Ƶ��� �� �ִ�.

#ifdef LIKE_APPLE
	cout << "APPLE" << endl;
#else
	cout << "ORANGE" << endl;
#endif

}