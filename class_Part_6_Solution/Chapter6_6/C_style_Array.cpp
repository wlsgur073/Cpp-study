#include <iostream>

using namespace std;

int main()
{
	char myString[] = "string";
	// char이 7글자로 뜨는 이유는 "string\0" 뒤에 null(\0) 숨어 있어서 그렇다.

	for (int i = 0; i < 7; ++i)
	{
		cout << (int)myString[i] << endl; // 아스키 코드로 확인 가능!
	}

	cout << sizeof(myString) / sizeof(myString[0]) << endl;
	// char이 1바이트고 "string"은 7개의 문자열이니 7바이트.
	// 따라서, myString[0] = 1 byte, [7 / 1 = 7] 계산이 나옴.


	return 0;
}

// <Memo>

// unsigned char myString[255]이 있는데,  myString[4] = '\0' 으로 설정하면
// myString[0~3]까지만 출력되고 그 뒤 [4~255]까지는 출력되지 않는다. 즉, '\0'는 문자열 종료의 의미가 있다.
// 띄어쓰기가 필요하면 cin.getline(변수, 배열)을 이용하자!