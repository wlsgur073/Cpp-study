#include <iostream>

using namespace std;

// ���� ���ϴ� ���.
int pow(int base, int exponent)
{
	int result = 1;
	
	for (int count = 0; count < exponent; ++count)
	{
		result *= base;
	}
	return result;
}

// base = 3, exponent = 3�� ���, count�� exponent�� �� 3���� �ݺ��� ���̴�.
// ù for�� result(1) * base(3)���� 3�� ������, �ι�°�� result(3) * base(3)���� 9�� ���´�.
// �̷��� 3�� 3���� 27�� ���� ����, return ������ 27 ���� main���� ���� �� �ְ� �ȴ�.

int main()
{

	int count = 0;
	for (; count < 10; ++count)
	// while(true) // ���� ����
	// for(;true;++count) // whileó�� ���ѷ��� ��� ����, true��� �۵���.
	{
		cout << count << endl;
	}
	cout << count << endl;


	return 0;
}