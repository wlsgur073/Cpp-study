#include <iostream>

using namespace std;

namespace work1 // #3. �̷� ������ ������ Ȯ���ϰ� �и��� �� �ִ�.
{
	int a = 1;
	void doSomething()
	{
		a += 3;
		cout << a << endl;
	}
}

namespace work2
{
	int a = 1; // #1. ���� �Լ��� ����� �� ����!
	void doSomething(int b) // #2. �Լ��� ������ �Ķ���Ͱ� �ٸ��� �浹�� ������ �ʴ´�!
	{
		a += 5;
		cout << a << endl;
	}
}

int main()
{
	 
	// Scope�� ���� �����ϱ�

	int apple = 5;

	cout << apple << endl;
	{
		int apple = 1; // �̸��� ������ �� apple�� ������ �ٸ� ����, �׷��� �̸��� �ٸ��� �����
		cout << apple << endl; // �� apple�� {}�ȿ����� ����ִ�.
	}
	cout << apple << endl; // ������ apple�� ���� ù ��° apple�̴�.

	cout << "namespace�� �� ��¹�" << endl;
	work1::doSomething();
	work2::doSomething(1);

	return 0;
}