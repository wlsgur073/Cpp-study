#include <iostream>

int main()
{
	using namespace std;

	bool bValue = false;		// bool�� 1����Ʈ
	char chValue = 65;			// char�� 1����Ʈ
	float fValue = 3.141592f;   // float�� 4����Ʈ
	double dValue = 3.141592;	// double�� 8����Ʈ
	// short�� 2����Ʈ
	// int, long�� 4����Ʈ
	// long long�� 8����Ʈ

	auto aValue = 3.141592;
	auto aValue2 = 3.141592f;

	// auto�� ���, ��� ���� double�̰� float���� ������ �� ���� sizeof�� �Ἥ ����Ʈ ���� Ȯ���ϸ� �ȴ�.
	cout << sizeof(short) << endl;
	cout << sizeof(aValue2) << endl;

	int i = (int)3.1415; // copy initailization
	int a(123);		// direct initializtion 
	int b{ 123 };	// uniform initializtion : �� �� ���� �޸� ������ Ÿ���� �ȸ��� ���, ������ ��ü�� �����ְ� ���� �߻�

	int k((int)3.14); // �Ǽ��� ������ �ٲ� �� ���⿡ �� 3�� ��µǼ� ���´�.
	int j = (double)3.141592; 
	cout << j << endl;

	// int o, l; // �̷� ������ ���� �� �ִ�. ���� ������ ���� ����.
	int o = 0, l(123), m{ 456 };

	return 0;
}