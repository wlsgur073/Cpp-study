#include <iostream>
#include <string>

//���� ĳ���Ͱ� �¾Ҵµ�, �������� �󸶳� ��� �ϴ��� ������ ��

/*int computeDamange(int weapon_id)// ������ �¾Ҵ�!
{
	if (weapon_id == 0) // sword
	{
		return 1;
	}

	if (weapon_id == 1) // hammer
	{
		return 2;
	}
	// ...
}*/
// �̷��� ��� �����ϸ� �Ǽ��� �������� ��ȣ������ �ɼǵ��� ǥ���ϱ� ���ؼ� �������� ����Ѵ�!

// �̹����� �÷��� ���� ���! ���� �������̽��� ���� ��, �������� �÷��� ����� ���� ����.
// �� ���� �÷��� 0��, 1��, 2��... �̷��� �����ϸ� ���� ���̴�.

enum Color			 //enum�� enumerated ������ ���� // color�� user-defiend data types ����� ���� ������ Ÿ�� (ex. string)
{
	COLOR_BLACK,	 // -3�� ���� �� �ִ�. �׷��� red�� -2, blue�� -1 ������ �����ȴ�.
	COLOR_RED,		 // �� �ɼǸ��� ���ڸ� ���� �� ������, int ���� ���� �ٸ� �Լ��� ��� ������ ����� �ν��Ѵ�.
	COLOR_BLUE,
	COLOR_GREEN,	 // �������� ,(comma)�� �־ �ȴ�. ���콺�� ���� ��� 0,1,2.. integer�� �������� �ִ�.
	COLOR_SKYBLUE	 // ������� ������ ��.
};					 // enum�� ;�����ݷ��� �� ������ �Ѵ�.

enum Feeling
{
	HAPPY,
	JOY,
	TIRED,
	BLUE			// ���� �÷��� COLOR_�� ���� BLUE�� ���� ��, �ߺ��Ǳ⿡ ������ ���.
};

int main()
{
	using namespace std;

	Color paint = COLOR_BLACK;
	Color house(COLOR_BLUE);
	Color appe{ COLOR_RED }; // uniform initialization�� �ٸ� �͵�� ���� ���ӽ����� �ٸ���.
							 // color�� ������ �ٸ� ������ bulid in Ÿ��, �⺻ �ڷ��� Ÿ���� �ƴϱ� �����̴�. (ex.string)
	cout << paint << " " << COLOR_BLACK << endl;

	/*cin >> house; // �� ��� cin ���� ���� ���� �� ������ ��ȸ�Ѵ�!
	int in_number;
	cin >> in_number;

	if (in_number == 2)
	{
		house = COLOR_BLUE;
	}*/

	/*string str_input;
	std::getline(cin, str_input);
	if(str_input == "COLOR_BLUE")*/
	// �̷� ��� color_blue�� �ҹ��ڷ� �Է������� �𸣰�, �Է��ڰ� ����̱⿡ ��Ÿ�� ������ �ִ�.
	
		
	return 0;
}