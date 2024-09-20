#include <iostream>
#include <typeinfo>
#include <iomanip>

int main()
{
	using namespace std;

	cout << typeid(4.0).name() << endl; // ()의 리터럴이 어떤 데이터 타입인지 화면에 출력해준다.

	// numeric promotion
	float a = 1.0f;
	double b = a;
	// double보다 작은 메모리 float가 double로 가는 경우,
	// 더 큰 메모리 공간에 할당 받는 것이라 특별히 문제는 없다.

	//numeric conversion
	int i = 30000;
	char c = i; // unsigned char은 max 255, singed는 127

	cout << static_cast<int>(c) << endl;
	// 적어도 char의 maximum까지 넣을 줄 알았는데, 48이라는 엉뚱한 숫자가 나온다.
	// int값을 2로 출력 시도하면 제대로 char범위 내에 2가 출력된다.

	double d = 0.123456789;
	float f = d;

	cout << setprecision(12) << d << " " << f << endl;
	// double d의 값은 float안에 저장할 수 있으나,
	// double(0.1)과 float(0.1)은 똑같은 0.1이 아니기에 정밀도가 떨어진다.

	// int i = 4.0;						// 이 상태면 암시적 형변환으로 int 4값이 나옴
	// int i = int(4.0);				// C++스타일 casting
	// int i = (int)4.0;				// C스타일 casting
	// int i = static_cast<int>(4.0);	// 직접 표현하는 casting

	return 0;
}