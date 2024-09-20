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
	s = s + 1; // 32768을 기대하지만 오버플로우(Overflow)가 되서 최솟값 출력됨
	cout << s << endl;

	short k = std::numeric_limits<short>::min();
	k = k - 1;
	cout << k << endl; // 이건 underflow, 최솟값보다 더 최솟값을 넣으려하면 오히려 최댓값이 출력됨
	
	unsigned int i = -1; // 최솟값이 0인데, -1을 입력했으므로 Underflow 현상 발생, 최댓값 출력됨
	cout << i << endl;

	cout << 22 % 4 << endl;
	return 0;
}