#include <iostream>

using namespace std;


int userInput()
{
	while (true)
	{
		cout << "Enter an integer number" << endl;
		int x;
		cin >> x;

		if (cin.fail())
		{
			cin.clear(); // 입력한 값을 청소해줌.
			std::cin.ignore(SHRT_MAX, '\n'); // 입력값 뒤에 빈칸으로 입력을 또해서 생겨나는 버퍼를 무시해주는 코드
			cout << "Invalied number, please try agian" << endl;
		}
		else
		{
			std::cin.ignore(SHRT_MAX, '\n');
			return x;
		}
	}
}

char operatorInput()
{
	char op;
	while (true)
	{
		cout << "Enter an operator" << endl;
		cin >> op;
		std::cin.ignore(SHRT_MAX, '\n');

		if (op == '+' || op == '-' || op == '*' || op == '/')
			break;
		else
			cout << "Invalied operator, please try again" << endl;
	}
	return op;
}

void printResult(int x, char op, int y)
{
	cout << "Your result is " << endl;
	/*if (op == '+')
		cout << x << '+' << y << " = " << (x + y) << endl;
	else if (op == '-')
		cout << x << '-' << y << " = " << (x - y) << endl;
	else if (op == '*')
		cout << x << 'x' << y << " = " << (x * y) << endl;
	else if (op == '/')
		cout << x << '/' << y << " = " << (x / y) << endl;*/

	switch ((char)op)
	{
	case((char)'+'):
		cout << x << '+' << y << " = " << (x + y) << endl;
		break;
	case((char)'-'):
		cout << x << '-' << y << " = " << (x - y) << endl;
		break;
	case((char)'*'):
		cout << x << '*' << y << " = " << (x * y) << endl;
		break;
	case((char)'/'):
		cout << x << '/' << y << " = " << (x / y) << endl;
		break;
	default:
		cout << "Not found operator" << endl;
		break;
	}

	cout << endl;
}


int main()
{
	// x + operator y = // x와 y 값을 출력할 int 가 필요함.
	int x = userInput();
	char op = operatorInput();
	int y = userInput();

	printResult(x, op, y);

	return 0;
}