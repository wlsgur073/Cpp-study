#include <iostream>
#include "MY_CONSTANTS.h"
//const�� ����

using namespace std;

void printNumber(const int my_Number) // const int'&' ���۷������� ������ ��찡 ��κ��̴�. ���� �߰�����
{
	// my_Number = 456; // �Ķ���͸� �̷��� �ٲٴ� ���� �幰��. �׷��⿡ �Ķ���Ϳ��� const�� ���� ����.
	// int n = my_Number; // �̷��Ե� �ٲ� �� ����.
	cout << my_Number << endl;
}

int main()
{
	const double gravity{ 9.8 }; // const�� ������ ���� �����ȴ�. �ٲ� �� ����.
	//gravity = 1.2;

	int number;
	cin >> number;
	const int special_number(number);
	//special_number�� �������̶� �ٲ� �� ������, number�� �ٲ� �� �ִ�(run time).

	// constexpr int my_const(123);
	// �� ��쿡�� compile time�� �̹� const�� ������ ������ų �� �ִ�.
	// const int spectial_number(number);
	// �� ��쿡�� run time �۵� �߿� ����ڿ� ���ؼ� �������Ѿ� �ϴ� ���̶� compile time�� ���� ���ؼ� ������ ��.

	double radius;
	double circumference = 2.0 * radius * constats::pi;

	return 0;
}