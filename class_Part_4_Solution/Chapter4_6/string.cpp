#include <iostream>
#include <string> // string ���̺귯��
#include <limits>

using namespace std;

int main()
{
	// "Hello, world"�� char[13]���� ǥ���Ǵ� ������
	// �� �� d �ڿ� ���ڿ��� �����ڴٴ� ���ڰ� �ϳ� �� �ֱ� �����̴�.
	const char my_strs[] = "Hello, world";
	const string my_hello = "Hello, world"; // direct, copy, uniform initializtion ��� ��� ����.
	
	cout << my_hello << endl;

	cout << "Your name ? : ";
	string name;
	// cin >> name;
	std::getline(std::cin, name); // ���� Ű�� �Է��� ������ ���ڿ��� ��� �Է¹ް� �ȴ�.

	cout << "Your age ? : ";
	// string age;
	// cin >> age;
	// std::getline(std::cin, age);
	int age;
	cin >> age; // �̷��� �ϸ� ���� ��¹����� int���� ��µȴ�.
	// std::cin.ignore(32767, '\n'); // \n(����Ű)�� ���� ������ 32767���� ���ڸ� �����ض�!
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	cout << name << " " << age << endl; // "JACK JACK"���� ��ĭ�� �ִ� ���ڿ��� �Է��ϸ� name age��� �Ȱ��� ���� ���´�.
	// ��ĭ�� ������ �� �� �Է¹��� ����Ѵ�. ��ĭ ���� ���ڿ��� �� ���� �Է¹��� �Ѱ��� ������ �ȴ�.

	string hw("Hello, world");
	cout << hw.length() << endl; // hw ���� �迭 ������ Ȯ���� �� �ִ�.

	return 0;
}