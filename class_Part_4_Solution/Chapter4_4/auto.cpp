#include <iostream>

// template�� auto���� ���ϴ�. ���Ŀ� ���.

// auto add(int x, int y) -> int; // �̷� �����ε� �Է�&����� ����� ǥ���� �� �ִ�.
// auto add(int x, int y) -> double; // ���� �� ���� �� �ִ�.

auto add(int x, int y) // int + int�̱⿡ �翬�� int�� �ڷ��� �߷��� �̾���
{
	return x + y;// return x + (double)y;�� ���� double�� �ν���
}

int main()
{
	auto a = 123;		// int�� �ν���
	auto b = 2.0;		// double�� �ν���
	auto c = 5 + 3.0;	// int + double�̱⿡ double�� �ν���

	int result = add(1, 2);

	return 0;
}