#include <iostream>
#include <cmath> // #2. ������ ǥ���ϱ� ���ؼ� cmath�� �ִ´�.

using namespace std;

int main()
{
	int x = 3 * 4 / 2;
	// ���ϱ�� ������� ��� �켱������ �����Ƿ� associativity ��Ģ�� �ǰ��� ����ȴ�.
	// "Operator in C and C++" ��Ű�ǵ�� �˻� ����

	// #1. C++������ ^ �� ������ �ǹ�������, C������ �׷��� �ʴ�.
	int i = std::pow(2, 3); // #3. power�Լ��� �ְ� (n, m) n�� m������ ǥ��.
	cout << i << endl;

	int y = 3;

	int z = x;
	z += y; // z = z + y; �� ����. / +�κп� �ٸ� �����ڸ� �����ص� �Ȱ��� �ۿ��Ѵ�.

	return 0;
}