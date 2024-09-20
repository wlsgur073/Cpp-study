#include <iostream>

bool isEqual(int a, int b)
{
	bool result = (a == b);

	return result;
}

int main()
{
	using namespace std;

	bool b1 = true; // copy initialization
	bool b2(false);	 // direct initializtion
	bool b3{ true }; // uniform initialization
	b3 = false;

	cout << std::boolalpha; // 1, 0��ſ� true or false�� ��¹��� ����.
	// noboolalpha�� �ٲ� �� ���� // ���� �� '!'�� ���̸� �ݾ���� ����
	cout << b3 << endl;
	cout << !b1 << endl;

	if (true) // false�� ��� ��¹� �ȳ����ų� else�� ����. 1,0�� ǥ�� ����
	{
		cout << "This is true" << endl;
		cout << "True second line" << endl;
	}
	else
	{
		cout << "This is false" << endl;
	}

	cout << isEqual(1, 1) << endl;
	cout << isEqual(0, 3) << endl;

	bool b;
	cin >> b;
	cout << "Your input : " << b << endl; // bool�� 1�� 0���� ����ǰ�, 0�� �ƴϸ� true�̴�

	return 0;
}