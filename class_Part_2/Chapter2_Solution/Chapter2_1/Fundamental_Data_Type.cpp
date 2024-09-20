#include <iostream>

int main()
{
	using namespace std;

	bool bValue = false;		// bool은 1바이트
	char chValue = 65;			// char은 1바이트
	float fValue = 3.141592f;   // float는 4바이트
	double dValue = 3.141592;	// double은 8바이트
	// short는 2바이트
	// int, long은 4바이트
	// long long은 8바이트

	auto aValue = 3.141592;
	auto aValue2 = 3.141592f;

	// auto인 경우, 어느 쪽이 double이고 float인지 구분이 안 갈때 sizeof를 써서 바이트 값을 확인하면 된다.
	cout << sizeof(short) << endl;
	cout << sizeof(aValue2) << endl;

	int i = (int)3.1415; // copy initailization
	int a(123);		// direct initializtion 
	int b{ 123 };	// uniform initializtion : 위 두 개와 달리 데이터 타입이 안맞을 경우, 컴파일 자체를 안해주고 에러 발생

	int k((int)3.14); // 실수를 정수로 바꿀 수 없기에 앞 3만 출력되서 나온다.
	int j = (double)3.141592; 
	cout << j << endl;

	// int o, l; // 이런 식으로 만들 수 있다. 같은 데이터 형만 가능.
	int o = 0, l(123), m{ 456 };

	return 0;
}