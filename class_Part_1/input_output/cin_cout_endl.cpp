#include <iostream> // cout, cin, endl ...

int main()
{

	using namespace std; // std::�� ������ �� ����. C#���� �⺻ �޴���� �����Ǿ� �־���.

	int x = 1024;
	double pi = 3.141592;
	cout << "I love the lecture!\n"; // << std::endl;
	cout << "x is " << x << "\npi is " << pi << endl;

	cout << "abc" << "\t" << "def" << endl;
	cout << "ab" << '\t' << "cdef" << endl;

	cout << "\a"; // ������ �Ҹ��� ����� �� �ִ�.

	// cin�� ���ؼ�...

	int k = 1;
	cout << "Before your input, x was " << k << endl;
	cin >> k;
	cout << "Your input is " << k << endl;

	return 0;
}