#include <iostream>
#include <bitset>

int main()
{
	using namespace std;
	
	// 게임에서 아이템이 네 가지가 나오는 게임을 만든다면
	/*bool item1_flag = false;
	bool item2_flag = false;
	bool item3_flag = false;
	bool item4_flag = false;*/

	// some event break out and get some item!
	// item1_flag = true;

	// die! and item2 loss
	// item2_flag = false;

	// if (item3_flag == true) // itme3를 가지고 있다면
	// {
		// event or available opening the door
	// }

	// if (item3_flag == true && item4_flag == false) // item3은 가지고 있고, item4를 가지고 있지 않은 경우
	// {
		// item3_flag = false;
		// item4_flag = true;
	// } // item3은 사라지고, item4를 가진다 라는 조건문
	
	unsigned char items_flag = 0;
	// cout << bitset<8>(items_flag) << endl;
	// 이렇게 하면 굳이 bool타입 함수 8개를 만들 필요가 없다.
	// 그 전에 전제조건이 필요하다! 아래 참고

	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;
	// opt4, 5, 6, 7 ... opt은 option의 줄임말

	cout << "No item" << bitset<8>(items_flag) << endl; // 아이템이 없는 상태

	// 지나가다가 이벤트 발생으로 아이템0을 줍는다
	items_flag |= opt0;
	cout << "Item0 obtained" << bitset<8>(items_flag) << endl;

	// item3 on // 3번째 이진수 자리가 true값으로 바뀌게 된다.
	items_flag |= opt3;
	cout << "Item3 obtained" << bitset<8>(items_flag) << endl;

	// item3 lost
	items_flag &= ~opt3; // ex. 0100 &= 1011 공통된 게 없으니 0000이 된다.
	cout << "item3 lost" << bitset<8>(items_flag) << endl;

	// has item1 ?
	if (items_flag & opt1) // 같은 이진수 자리가 1이면 true로 인식한다.
	{cout << "You have an item1" << endl;}
	else { cout << "You have not an item1" << endl; }

	// obtain item 2, 3
	items_flag |= (opt2 | opt3);
	cout << "item2, 3 obtained" << bitset<8>(items_flag) << endl;
	
	// In case that have item2 but don't have item1
	if ((items_flag & opt2) && !(items_flag & opt1))
	{
		items_flag ^= (opt2 ^ opt1); // 아이템2는 사라지게 하고
		//items_flag ^= opt1; // 대신에 아이템1을 얻게 하는 것.
	}

	cout << bitset<8>(items_flag) << endl;


	// 비트 플래그가 언제 사용되는지, 실용 예제
	// 컴퓨터 그레픽스에서..
	// glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); 라는 코딩을 함.
	// 파라미터에 옵션을 줄이고 싶을때는 비트 플래그를 사용한다.

	// bit mask // color table
	// 색을 표현할 때~! gold의 경우 #FFD700 (255.215.0) / 문자 2개씩 1바이트를 취한다.
	// #을 제외한 FF가 1바이트 D7가 1바이트 00이 1바이트. 총 3바이트. 이후 알파까지 더하면 int와 같은 4바이트로 프로그래밍시 편리함.
	// 레드는 255고, 그린은 215이고, 블루는 0이다라는 걸 분리해서 표현하고 싶을 때 아래 참고
	// 2진수는 작성하기 불편하기에 16진수로 표현

	const unsigned int red_mask = 0xFF0000; // 해당 색깔을 추출하자!
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;

	cout << std::bitset<32>(red_mask) << endl; // 이러면 해당 색깔 범위를 알 수 있다!

	unsigned int pixel_color = 0xDDA520; //앞에 0x를 붙혀서 16진수로 표현함 
	// DA는 레드, A5는 그린, 20은 블루

	cout << std::bitset<32>(pixel_color) << endl; // int가 4바이트 = 32비트

	unsigned char red = (pixel_color & red_mask) >> 16;
	unsigned char blue = pixel_color & blue_mask;
	// unsigned char green = pixel_color & green_mask; // char은 1바이트이기에 16비트 범위에 있는 green 출력 불가능
	// unsigned int green = pixel_color & green_mask; // int는 4바이트니까 그 범위까지 표현 가능 // 근데 이러면 1바이트번째 코드가 0000 0000으로 표기됨
	// unsigned int green = (pixel_color & green_mask) >> 8; // 이러면 그린이 1바이트번째 코드로 옮겨지지만, 2바이트 번째가 또 0000 0000으로 입력됨
	unsigned char green = (pixel_color & green_mask) >> 8;

	cout << "red " << bitset<8>(red) << " " << int(red) << endl;
	cout << "green " << bitset<8>(green) << " " << int(green) << endl;
	cout << "blue " << bitset<8>(blue) << " "  << int(blue) << endl; // 10진수 int로 표현할수도 있다.


	return 0;
}