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

	cout << std::boolalpha; // 1, 0대신에 true or false로 출력문이 나옴.
	// noboolalpha로 바꿀 수 있음 // 문장 앞 '!'를 붙이면 반어문으로 사용됨
	cout << b3 << endl;
	cout << !b1 << endl;

	if (true) // false일 경우 출력문 안나오거나 else문 실행. 1,0로 표현 가능
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
	cout << "Your input : " << b << endl; // bool은 1과 0으로 선언되고, 0이 아니면 true이다

	return 0;
}