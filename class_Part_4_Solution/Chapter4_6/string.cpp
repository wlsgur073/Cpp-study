#include <iostream>
#include <string> // string 라이브러리
#include <limits>

using namespace std;

int main()
{
	// "Hello, world"가 char[13]으로 표현되는 이유는
	// 맨 뒤 d 뒤에 문자열을 끝내겠다는 문자가 하나 더 있기 때문이다.
	const char my_strs[] = "Hello, world";
	const string my_hello = "Hello, world"; // direct, copy, uniform initializtion 모두 사용 가능.
	
	cout << my_hello << endl;

	cout << "Your name ? : ";
	string name;
	// cin >> name;
	std::getline(std::cin, name); // 엔터 키를 입력할 때까지 문자열을 계속 입력받게 된다.

	cout << "Your age ? : ";
	// string age;
	// cin >> age;
	// std::getline(std::cin, age);
	int age;
	cin >> age; // 이렇게 하면 다음 출력문에도 int값이 출력된다.
	// std::cin.ignore(32767, '\n'); // \n(엔터키)가 나올 때까지 32767개의 글자를 무시해라!
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	cout << name << " " << age << endl; // "JACK JACK"같은 빈칸이 있는 문자열을 입력하면 name age모두 똑같은 값이 나온다.
	// 빈칸이 있으면 그 전 입력문을 출력한다. 빈칸 다음 문자열은 그 다음 입력문에 넘겨줘 버리게 된다.

	string hw("Hello, world");
	cout << hw.length() << endl; // hw 문자 배열 갯수를 확인할 수 있다.

	return 0;
}