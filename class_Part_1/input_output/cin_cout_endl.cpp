#include <iostream> // cout, cin, endl ...

int main()
{

	using namespace std; // std::를 생략할 수 있음. C#에는 기본 메뉴얼로 설정되어 있었다.

	int x = 1024;
	double pi = 3.141592;
	cout << "I love the lecture!\n"; // << std::endl;
	cout << "x is " << x << "\npi is " << pi << endl;

	cout << "abc" << "\t" << "def" << endl;
	cout << "ab" << '\t' << "cdef" << endl;

	cout << "\a"; // 윈도우 소리를 출력할 수 있다.

	// cin에 대해서...

	int k = 1;
	cout << "Before your input, x was " << k << endl;
	cin >> k;
	cout << "Your input is " << k << endl;

	return 0;
}