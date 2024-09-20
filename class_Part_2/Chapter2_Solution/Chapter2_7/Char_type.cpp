#include <iostream>

int main()
{
	using namespace std;

	char c1(65);
	char c2('A'); // string "문자열" // char '하나의 문자'

	// C-style casting
	cout << (char)65 << endl;
	cout << (int)'A' << endl;

	// Cpp style
	cout << char(65) << endl;
	cout << int('A') << endl;

	cout << static_cast<char>(65) << endl; // ASCII 코드를 casting해서 'A'로 출력됨
	cout << static_cast<char>('A') << endl; // 원래 문자니까 casting필요 없이 출력됨
	cout << static_cast<int>('A') << endl;

	cout << "-------------------------------------------------------------------------------" << endl;

	/*char c3;
	cin >> c3;
	cout << c3 << " " << static_cast<int>(c3) << endl;
	cin >> c3;
	cout << c3 << " " << static_cast<int>(c3) << endl;
	cin >> c3;
	cout << c3 << " " << static_cast<int>(c3) << endl;*/

	cout << sizeof(char) << endl;
	cout << (int)std::numeric_limits<char>::max() << endl;
	cout << (int)std::numeric_limits<char>::lowest() << endl; // 모든 아스키 코드를 화면에 출력할 수 없기에 int로 캐스팅

	return 0;
};