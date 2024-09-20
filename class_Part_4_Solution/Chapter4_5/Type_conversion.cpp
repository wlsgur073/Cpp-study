#include <iostream>
#include <typeinfo>
#include <iomanip>

int main()
{
	using namespace std;

	cout << typeid(4.0).name() << endl; // ()�� ���ͷ��� � ������ Ÿ������ ȭ�鿡 ������ش�.

	// numeric promotion
	float a = 1.0f;
	double b = a;
	// double���� ���� �޸� float�� double�� ���� ���,
	// �� ū �޸� ������ �Ҵ� �޴� ���̶� Ư���� ������ ����.

	//numeric conversion
	int i = 30000;
	char c = i; // unsigned char�� max 255, singed�� 127

	cout << static_cast<int>(c) << endl;
	// ��� char�� maximum���� ���� �� �˾Ҵµ�, 48�̶�� ������ ���ڰ� ���´�.
	// int���� 2�� ��� �õ��ϸ� ����� char���� ���� 2�� ��µȴ�.

	double d = 0.123456789;
	float f = d;

	cout << setprecision(12) << d << " " << f << endl;
	// double d�� ���� float�ȿ� ������ �� ������,
	// double(0.1)�� float(0.1)�� �Ȱ��� 0.1�� �ƴϱ⿡ ���е��� ��������.

	// int i = 4.0;						// �� ���¸� �Ͻ��� ����ȯ���� int 4���� ����
	// int i = int(4.0);				// C++��Ÿ�� casting
	// int i = (int)4.0;				// C��Ÿ�� casting
	// int i = static_cast<int>(4.0);	// ���� ǥ���ϴ� casting

	return 0;
}