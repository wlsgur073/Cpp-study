#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	cout << "�ָӴ� �� ������ ";
	cout << x;
	cout << "�� �Դϴ�." << endl;

	cout << "�ƶ��̴� �ָӴ� �� ������ ������ ���������ϴ�." << endl;
	int a = x / 2;
	x = x - a;
	
	cout << "��å���� ���� �ƶ��̴� 1���� ���� �־����ϴ�." << endl;
	a = a - 1;
	x = x + 1;

	cout << "���� �ֹ̳� �� ���� ��Ȳ ";
	cout << x;
	cout << "��" << endl;

	cout << "����̰� ������ ���������ϴ�." << endl;
	int w = x / 2;
	x = x - w;

	cout << "����̴� ���� 2���� �� ���� �����ϴ�." << endl;
	w = w + 2;
	x = x - 2;

	cout << "�ƶ��̰� ������ ������ ���� ";
	cout << a;
	cout << "��" << endl;

	cout << "����̰� ������ ������ ���� ";
	cout << w;
	cout << "��" << endl;

	cout << "���� �ָӴ� �� ���� ������ ";
	cout << x;
	cout << "�� �Դϴ�." << endl;

	return 0;
}