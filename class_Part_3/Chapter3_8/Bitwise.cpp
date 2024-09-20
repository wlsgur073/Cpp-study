#include <iostream>
#include <bitset> // 2������ �ٲ㼭 ������ִ� ���̺귯��

int main()
{
	using namespace std;

	// unsigned int a = 3;
	// cout << std::bitset<4>(a) << endl; // a�� ��� ������ �Ǵ��� 2������ �������
	// <>��ȣ�� ��Ʈ�� �ǹ���.
	// unsigned int b = a << 1; // �������� 1�� ����Ʈ(�̵�)��.
	// cout << std::bitset<4>(b) << " " << b << endl; // 10������ �翬�� �ٲ�
	// cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl; 
	// cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl; 

	// cout << std::bitset<4>(~a) << " " << ~a << endl; // bitwise�� ~�� not�̴�.

	//������ ǥ���� �տ� 0b�� ������.
	unsigned int b = 0b1100;
	unsigned int c = 0b0110;
	cout << b << endl; // 10������ ǥ����
	cout << c << endl;
	cout << std::bitset<4>(b & c) << endl; // logical ���� && �� ����
	cout << std::bitset<4>(b | c) << endl; // ||
	cout << std::bitset<4>(b ^ c) << endl; // !=
	// &�� ����Ǵ� 1�� ����� ������ 0���� shift
	// |�� 1�� �ִ� �κ� ��� 1�� shift
	// ^�� ����Ǵ� 1�� 0���� shift. ������ 1�� ��� ����.
	
	return 0;
}