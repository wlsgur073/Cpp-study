#include <iostream>

using namespace std;

int add(int a, int b)
{
	return a + b;
}


int main()
{
	/*int x = 6, y = 6;

	cout << x << " " << y << endl;
	cout << ++x << " " << --y << endl;
	cout << x << " " << y << endl;
	cout << x++ << " " << y-- << endl;
	cout << x << " " << y << endl;*/

	// ++이 앞에 올 경우 : 1 + (변수) // ++가 뒤에 올 경우 : (변수) + 1
	// 이 차이를 알고 있어야 한다.


	int i = 1, c = 2;
	// int v = add(i, ++i); // 같은 변수로 증감연산자 발생 -> 이렇게 쓰면 안된다.
	// i = i++ undefine 명확하지 않은 것.
	int v = add(i, ++c);
	cout << v << endl;

	return 0;
}