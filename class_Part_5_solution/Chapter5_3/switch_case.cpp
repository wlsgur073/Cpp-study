#include <iostream>

using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE
};

void printColorName(Colors color)
{
	/*if (color == Colors::BLACK) // #1�� try
		cout << "Black" << endl;
	else if (color == Colors::WHITE)
		cout << "White" << endl;*/
	// ... �̷��� �� �������ַ��� ������!

	// #3��: 2���� ������ 1�� try
	{
		switch (color) // switch (static_cast<int>(color)�� �ٲٸ� case�� int������ ���� �� �ִ�.
		{
			case Colors::BLACK :
			{
				cout << "BLACK";
				break;
			}
			case Colors::WHITE:
				cout << "WHTIE";
			case Colors::RED:
				cout << "RED";
			case Colors::GREEN:
				cout << "GREEN";
			case Colors::BLUE:
				cout << "BLUE";
		}
		cout << endl;
	}

}

int main()
{
	// printColorName(Colors::BLACK); // #1

	// printColorName(Colors::BLACK); // #3

	// #2�� try

	int x;
	cin >> x;

//{
//	switch (x)
//	{
//	case 0:
//			cout << "Zero";
//			break; // break�� ���� ���, x = 0�̸� 0, 1, 2�� ���� ���´�.
//	case 1:
//			cout << "One";
//			break; // break�� ���� ���, x = 1�̸� 1, 2�� ���´�.
//	case 2:
//			cout << "Two";
//			break; // break�� ������ ���� case���� �ϳ��� ��� ������ �� �ִ�.
//	}
//	cout << endl;
//}

	switch (x)
	{
	default: // else�� ���� ����. case �ڵ� ������ �������� ���� ��.
		cout << "Undefined input " << x << endl;
		// break; // �������̶� break ��� �ǰ� �־ �ȴ�.
	}

	return 0;
}