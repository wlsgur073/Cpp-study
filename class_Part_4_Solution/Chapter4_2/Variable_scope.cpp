#include <iostream>
// #include "Test.cpp" // �ٸ� cpp������ include�� �� ������, ������ ������� �ʴ´�.
#include "Constants.h" // ��������� include�Ѵ�.

using namespace std;

// int a = 1; // ���⼭�� ���� �����ε� ��� �����ϴ�.

// void doSomething()
// {
//  	static int a = 1; // �ʱ�ȭ�� �� ���ۿ� �ȵȴ�. ��, a = 1 ����� ��, �� ���·� ��� {}�ȿ� ���´�.
//  	++a;
//  	cout << a << endl;
// }

int value = 123; // Global variable : (C��� ����)main�Լ� �ۿ��� �����Ѵ�. ���� �ȿ��� ���� ū ���� �ȿ� ������ ����.

// forward declaration // Test.cpp ���� ��������
void doSomething(); // ��򰡿� void doSomething()�� ������ ������ ����϶�� ����
// �� ������ extern void doSomething() �� extern�� ������ ����

// extern int a; // �̹� test���Ͽ� ������ �ߴµ� ���⼭�� ���� ������ �ϸ� ���α׷� ��ü���� ���� �� �ߺ��Ǿ� ������ ���.
int main()
{
	// cout << a << endl;
	// doSomething(); // @1

	cout << "-------------------------------------------------------" << endl;
	cout << value << endl; // ���� ������ ��µ�

	// int value = 1; // local variale : main{}�� ����� �޸𸮰� OS�� �ݳ��� �ǰ�, ����� �� ���� �ȴ�.

	// cout << ::value << endl; // �ݷ� ::�� ������ ���� ������ ������ ����� �� �ִ�.
	// cout << value << endl;

	cout << "In mian.cpp file " << constants::pi << " " << &constants::pi << endl;
	doSomething();
	// �Ѵ� ���� constants ������Ͽ��� ������ pi������, �ּҰ� �ٸ���.

	return 0;
}