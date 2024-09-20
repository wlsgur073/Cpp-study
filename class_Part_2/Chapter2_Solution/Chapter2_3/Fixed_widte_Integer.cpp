#include <iostream>
#include <cstdint> // iostream에 포함되어 있어서 없어도 된다.

using namespace std;

int main()
{
	std::int16_t i(5); // C언어의 stdint.h와 같다. 16바이트에 해당하는 메모리 할당량을 부여할 수 있다.
	// 2바이트이니 short와 같은 메모리 할당량 가능.
	std::int8_t myint = 65; // 마우스로 int8_t를 갖다대면 signed char 자료형태로 나온다.
	//이는 char 문자 자료형으로 출력할 때 ASCII코드 65를 출력해오기에 'A'가 출력된다. 이런 오류가 생길 수 있다.

	cout << myint << endl;

	std::int_fast8_t fi(5); // 8bits중에 가장 빠르게 출력할 수 있는 걸 넣어준다. signed char이 나온다.
	std::int_least64_t fl(5); // 이 친구는 long long이 나온다

	cout << sizeof(float) << endl;
	return 0;
}