#include <iostream>

using namespace std;

int main()
{
	int selection;
	// must be declared outside do/while loop

	do
	{
		cout << "1. add" << endl;
		cout << "2. sub" << endl;
		cout << "3. mult" << endl;
		cout << "4. div" << endl;
		cin >> selection;
	}
	while (selection <= 0 || selection >= 5); // do/while ' ; '세미콜론이 필요함
	// while은 false인 경우, 한 번도 사용되지 않을 수 있다.
	// do-while의 경우, 무조건 한 번은 실행하고 조건을 따진다.

	cout << "You selected " << selection << endl;

	return 0;
}