#include <iostream>

using namespace std;

int main()
{
	// int var // OS에게 int 하나만큼의 사이즈를 받아가는 방법
	int* ptr = new int{ 10 }; // 주석1

	// *ptr = 7; // int a = 7 하고 같다.
	cout << ptr << endl;
	cout << *ptr << endl;

	delete ptr;
	ptr = nullptr; // 이 포인터에는 쓸모있는 주소가 없어요 라는 기록

	cout << "After delete" << endl;
	if (ptr != nullptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;
	}
	return 0;
}

// #1. new int는, int사이즈에 맞춰서 OS에게 메모리를 받아온 다음에
// 그 메모리 주소를 우리에게 알려준다. 그렇기에 포인터로 받아야 한다.
// OS로 부터 받아 온 int짜리 메모리의 주소가 ptr에 저장된다. 그럼 그대로 사용할 수 있다.