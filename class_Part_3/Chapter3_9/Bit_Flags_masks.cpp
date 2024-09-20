#include <iostream>
#include <bitset>

int main()
{
	using namespace std;
	
	// ���ӿ��� �������� �� ������ ������ ������ ����ٸ�
	/*bool item1_flag = false;
	bool item2_flag = false;
	bool item3_flag = false;
	bool item4_flag = false;*/

	// some event break out and get some item!
	// item1_flag = true;

	// die! and item2 loss
	// item2_flag = false;

	// if (item3_flag == true) // itme3�� ������ �ִٸ�
	// {
		// event or available opening the door
	// }

	// if (item3_flag == true && item4_flag == false) // item3�� ������ �ְ�, item4�� ������ ���� ���� ���
	// {
		// item3_flag = false;
		// item4_flag = true;
	// } // item3�� �������, item4�� ������ ��� ���ǹ�
	
	unsigned char items_flag = 0;
	// cout << bitset<8>(items_flag) << endl;
	// �̷��� �ϸ� ���� boolŸ�� �Լ� 8���� ���� �ʿ䰡 ����.
	// �� ���� ���������� �ʿ��ϴ�! �Ʒ� ����

	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;
	// opt4, 5, 6, 7 ... opt�� option�� ���Ӹ�

	cout << "No item" << bitset<8>(items_flag) << endl; // �������� ���� ����

	// �������ٰ� �̺�Ʈ �߻����� ������0�� �ݴ´�
	items_flag |= opt0;
	cout << "Item0 obtained" << bitset<8>(items_flag) << endl;

	// item3 on // 3��° ������ �ڸ��� true������ �ٲ�� �ȴ�.
	items_flag |= opt3;
	cout << "Item3 obtained" << bitset<8>(items_flag) << endl;

	// item3 lost
	items_flag &= ~opt3; // ex. 0100 &= 1011 ����� �� ������ 0000�� �ȴ�.
	cout << "item3 lost" << bitset<8>(items_flag) << endl;

	// has item1 ?
	if (items_flag & opt1) // ���� ������ �ڸ��� 1�̸� true�� �ν��Ѵ�.
	{cout << "You have an item1" << endl;}
	else { cout << "You have not an item1" << endl; }

	// obtain item 2, 3
	items_flag |= (opt2 | opt3);
	cout << "item2, 3 obtained" << bitset<8>(items_flag) << endl;
	
	// In case that have item2 but don't have item1
	if ((items_flag & opt2) && !(items_flag & opt1))
	{
		items_flag ^= (opt2 ^ opt1); // ������2�� ������� �ϰ�
		//items_flag ^= opt1; // ��ſ� ������1�� ��� �ϴ� ��.
	}

	cout << bitset<8>(items_flag) << endl;


	// ��Ʈ �÷��װ� ���� ���Ǵ���, �ǿ� ����
	// ��ǻ�� �׷��Ƚ�����..
	// glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); ��� �ڵ��� ��.
	// �Ķ���Ϳ� �ɼ��� ���̰� �������� ��Ʈ �÷��׸� ����Ѵ�.

	// bit mask // color table
	// ���� ǥ���� ��~! gold�� ��� #FFD700 (255.215.0) / ���� 2���� 1����Ʈ�� ���Ѵ�.
	// #�� ������ FF�� 1����Ʈ D7�� 1����Ʈ 00�� 1����Ʈ. �� 3����Ʈ. ���� ���ı��� ���ϸ� int�� ���� 4����Ʈ�� ���α׷��ֽ� ����.
	// ����� 255��, �׸��� 215�̰�, ���� 0�̴ٶ�� �� �и��ؼ� ǥ���ϰ� ���� �� �Ʒ� ����
	// 2������ �ۼ��ϱ� �����ϱ⿡ 16������ ǥ��

	const unsigned int red_mask = 0xFF0000; // �ش� ������ ��������!
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;

	cout << std::bitset<32>(red_mask) << endl; // �̷��� �ش� ���� ������ �� �� �ִ�!

	unsigned int pixel_color = 0xDDA520; //�տ� 0x�� ������ 16������ ǥ���� 
	// DA�� ����, A5�� �׸�, 20�� ���

	cout << std::bitset<32>(pixel_color) << endl; // int�� 4����Ʈ = 32��Ʈ

	unsigned char red = (pixel_color & red_mask) >> 16;
	unsigned char blue = pixel_color & blue_mask;
	// unsigned char green = pixel_color & green_mask; // char�� 1����Ʈ�̱⿡ 16��Ʈ ������ �ִ� green ��� �Ұ���
	// unsigned int green = pixel_color & green_mask; // int�� 4����Ʈ�ϱ� �� �������� ǥ�� ���� // �ٵ� �̷��� 1����Ʈ��° �ڵ尡 0000 0000���� ǥ���
	// unsigned int green = (pixel_color & green_mask) >> 8; // �̷��� �׸��� 1����Ʈ��° �ڵ�� �Ű�������, 2����Ʈ ��°�� �� 0000 0000���� �Էµ�
	unsigned char green = (pixel_color & green_mask) >> 8;

	cout << "red " << bitset<8>(red) << " " << int(red) << endl;
	cout << "green " << bitset<8>(green) << " " << int(green) << endl;
	cout << "blue " << bitset<8>(blue) << " "  << int(blue) << endl; // 10���� int�� ǥ���Ҽ��� �ִ�.


	return 0;
}