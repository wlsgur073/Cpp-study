#include <iostream>

int main()
{
	using namespace std;

	char c1(65);
	char c2('A'); // string "���ڿ�" // char '�ϳ��� ����'

	// C-style casting
	cout << (char)65 << endl;
	cout << (int)'A' << endl;

	// Cpp style
	cout << char(65) << endl;
	cout << int('A') << endl;

	cout << static_cast<char>(65) << endl; // ASCII �ڵ带 casting�ؼ� 'A'�� ��µ�
	cout << static_cast<char>('A') << endl; // ���� ���ڴϱ� casting�ʿ� ���� ��µ�
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
	cout << (int)std::numeric_limits<char>::lowest() << endl; // ��� �ƽ�Ű �ڵ带 ȭ�鿡 ����� �� ���⿡ int�� ĳ����

	return 0;
};