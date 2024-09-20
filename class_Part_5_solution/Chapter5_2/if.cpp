#include <iostream>

using namespace std;

int min(int x, int y)
{
	if (x > y)
		return y; 
	// x가 y보다 클 경우 y를 리턴
	else	
		return x;
	// 그렇지 않은 경우 x 리턴

	// return (x > y) ? y : x; // 삼항 연산자로 도출할수도 있음.
}

int main()
{
	int x;
	cin >> x;

	// if (x > 10)
		// cout << x << " is bigger than 10 " << endl;
	// else if (x < 10)
		// cout << "x is less than 10" << endl;
	// x가 10일 때는 if도 else if문도 실행되지 않음.
	// else // if (x == 10)
		// cout << "x is exactly 10" << endl;
	// 이렇게 체인이 가능함.

	if (x > 10)
		cout << "A" << endl;
	else if (x == -1)
		return 0;
	// exit(0); // else if가 실행되면 프로그램을 끝낼수도 있다.
	// 그렇다고 return 0이 break와 같은건 아니다.
	// break는 해당 블록을 끝내는 기능. return은 프로그램을 끝내는 기능.
	else if (x < 0)
		cout << "B" << endl;

	cout << "Hello" << endl;

	return 0;
}