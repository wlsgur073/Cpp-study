#include <iostream>

using namespace std;

int main()
{
	/*
	int value = 7;
	int * ptr = &value;
	
	cout << uintptr_t(ptr - 1) << endl;
	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr + 1) << endl;
	cout << uintptr_t(ptr + 2) << endl; // �ּ�1. ������ ����
	*/

	// memory leak �޸� ����
	// �޸𸮸� ������ �ʰ� ��� ����⸸ �ϴ� ��.
	// ������ �޸𸮰� ��� �ִ����� �� ���� ���� ����

	while (true)
	{
		int *ptr = new int;
		cout << ptr << endl;
	} // ���⿡ ���� ptr ������ �������.

	// ������ �ִ��� �ľ��ϴ� ��� 1
	// �Ҵ�޴� �޸� �����Ͱ� Ŭ ���
	// task manager(�۾� ������) -> CPU Ȯ�� & process
	// �޸𸮰� ������ �ö󰣴ٸ� ������ �ִٴ� ����.
	// diagnostic tools ���� �� : debug -> windows -> show diagnostic tools
	
	// �ذ�� : while �������� delete ptr;�� ������ ��Ģ������ �ݺ����� �����س���.
	// ���α׷����� ���Ϸ��� new�� delete�� ���� ����ϴ� ���� ����.

	return 0;
}

// uintptr_t�� 16���� �����͸� 10������ ǥ���ϴ� ���.
// (int)������ ���ؼ� ȣ���س��� ����ϰ� ����.
// �ٸ� ���� uintptr_t�� ����, ������ Ÿ���� int�� �ƴ� �ٸ� ���̾ 10������ �ٲ��ش�.
// #1. ������ Ÿ��(int, double ..)�� bytes ����ŭ ���������� �̵��Ѵ�.
