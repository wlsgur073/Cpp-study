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
	/*if (color == Colors::BLACK) // #1번 try
		cout << "Black" << endl;
	else if (color == Colors::WHITE)
		cout << "White" << endl;*/
	// ... 이렇게 다 설정해주려면 귀찮다!

	// #3번: 2번을 도입한 1번 try
	{
		switch (color) // switch (static_cast<int>(color)로 바꾸면 case를 int값으로 받을 수 있다.
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

	// #2번 try

	int x;
	cin >> x;

//{
//	switch (x)
//	{
//	case 0:
//			cout << "Zero";
//			break; // break가 없는 경우, x = 0이면 0, 1, 2도 같이 나온다.
//	case 1:
//			cout << "One";
//			break; // break가 없는 경우, x = 1이면 1, 2가 나온다.
//	case 2:
//			cout << "Two";
//			break; // break가 있으면 각각 case마다 하나씩 끊어서 실행할 수 있다.
//	}
//	cout << endl;
//}

	switch (x)
	{
	default: // else와 같은 개념. case 코딩 끝나고 마지막에 쓰는 것.
		cout << "Undefined input " << x << endl;
		// break; // 마지막이라서 break 없어도 되고 있어도 된다.
	}

	return 0;
}