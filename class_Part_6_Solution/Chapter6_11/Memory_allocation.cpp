#include <iostream>

using namespace std;

int main()
{
	// int var // OS���� int �ϳ���ŭ�� ����� �޾ư��� ���
	int* ptr = new int{ 10 }; // �ּ�1

	// *ptr = 7; // int a = 7 �ϰ� ����.
	cout << ptr << endl;
	cout << *ptr << endl;

	delete ptr;
	ptr = nullptr; // �� �����Ϳ��� �����ִ� �ּҰ� ����� ��� ���

	cout << "After delete" << endl;
	if (ptr != nullptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;
	}
	return 0;
}

// #1. new int��, int����� ���缭 OS���� �޸𸮸� �޾ƿ� ������
// �� �޸� �ּҸ� �츮���� �˷��ش�. �׷��⿡ �����ͷ� �޾ƾ� �Ѵ�.
// OS�� ���� �޾� �� int¥�� �޸��� �ּҰ� ptr�� ����ȴ�. �׷� �״�� ����� �� �ִ�.