#include <iostream>

using namespace std;

int main()
{
	// char name[] = "Jack jack";
	// char *name = "Jack Jack"; // �ּ�1
	
	const char *name = "Jack Jack";
	const char* name2 = "Jack Jack";

	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl; // �ּ�2

	return 0;
}

// #1. ������ ���ڿ��� ��� �޸𸮸� ��� ������ΰ��� �ƹ��� ������ ����.
// �����Ϳ��� ���� �� ����. �����ʹ� �޸��� �ּҸ� ����Ű�� �͸� �Ѵ�.
// �׷����� �ұ��ϰ�, �ش� ���ڿ��� ��ȣ���� ����� ����ϴ� ����� �ִ�. -> const���

// #2. ���ڿ��� ���� ���, �����Ϸ��� �ڵ����� ���� �ּҸ� ȣ���Ҽ��� �ִ�.
// �̷��� ���, �� ���ڿ��� ���ͷ� ���¸� �ٲٸ� �ּҵ� �ڸ� �ּҷ� �Ҵ�ȴ�.