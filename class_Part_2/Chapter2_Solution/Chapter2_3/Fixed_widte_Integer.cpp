#include <iostream>
#include <cstdint> // iostream�� ���ԵǾ� �־ ��� �ȴ�.

using namespace std;

int main()
{
	std::int16_t i(5); // C����� stdint.h�� ����. 16����Ʈ�� �ش��ϴ� �޸� �Ҵ緮�� �ο��� �� �ִ�.
	// 2����Ʈ�̴� short�� ���� �޸� �Ҵ緮 ����.
	std::int8_t myint = 65; // ���콺�� int8_t�� ���ٴ�� signed char �ڷ����·� ���´�.
	//�̴� char ���� �ڷ������� ����� �� ASCII�ڵ� 65�� ����ؿ��⿡ 'A'�� ��µȴ�. �̷� ������ ���� �� �ִ�.

	cout << myint << endl;

	std::int_fast8_t fi(5); // 8bits�߿� ���� ������ ����� �� �ִ� �� �־��ش�. signed char�� ���´�.
	std::int_least64_t fl(5); // �� ģ���� long long�� ���´�

	cout << sizeof(float) << endl;
	return 0;
}