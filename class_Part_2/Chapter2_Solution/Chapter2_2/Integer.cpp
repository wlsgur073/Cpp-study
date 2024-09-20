#include <iostream>
#include <cmath>
#include <limits>

int main()
{
	using namespace std;
	
	short s = 1; // 2bytes = 2 * 8 bits = 16bits

	/*cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;
	cout << std::numeric_limits<short>::max() << endl;
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::lowest() << endl;*/

	s = 32767;
	s = s + 1; // 32768�� ��������� �����÷ο�(Overflow)�� �Ǽ� �ּڰ� ��µ�
	cout << s << endl;

	short k = std::numeric_limits<short>::min();
	k = k - 1;
	cout << k << endl; // �̰� underflow, �ּڰ����� �� �ּڰ��� �������ϸ� ������ �ִ��� ��µ�
	
	unsigned int i = -1; // �ּڰ��� 0�ε�, -1�� �Է������Ƿ� Underflow ���� �߻�, �ִ� ��µ�
	cout << i << endl;

	cout << 22 % 4 << endl;
	return 0;
}