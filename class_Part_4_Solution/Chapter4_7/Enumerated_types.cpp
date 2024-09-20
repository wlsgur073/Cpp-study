#include <iostream>
#include <string>

//게임 캐릭터가 맞았는데, 데미지를 얼마나 줘야 하는지 설정할 때

/*int computeDamange(int weapon_id)// 검으로 맞았다!
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
// 이렇게 계속 나열하면 실수가 많아지니 기호적으로 옵션들을 표현하기 위해서 열거형을 사용한다!

// 이번에는 컬러를 예로 든다! 유저 인터페이스를 만들 때, 여러가지 컬러를 사용할 때가 많다.
// 각 각의 컬러를 0번, 1번, 2번... 이렇게 설정하면 힘들 것이다.

enum Color			 //enum은 enumerated 열거의 약자 // color은 user-defiend data types 사용자 정의 데이터 타입 (ex. string)
{
	COLOR_BLACK,	 // -3을 넣을 수 있다. 그러면 red는 -2, blue는 -1 식으로 나열된다.
	COLOR_RED,		 // 각 옵션마다 숫자를 넣을 수 있지만, int 값이 같은 다른 함수의 경우 동일한 존재로 인식한다.
	COLOR_BLUE,
	COLOR_GREEN,	 // 마지막에 ,(comma)를 넣어도 된다. 마우스를 갖다 대면 0,1,2.. integer로 보여지고 있다.
	COLOR_SKYBLUE	 // 순서대로 배정이 됨.
};					 // enum은 ;세미콜론을 꼭 붙혀야 한다.

enum Feeling
{
	HAPPY,
	JOY,
	TIRED,
	BLUE			// 위에 컬러에 COLOR_가 없는 BLUE가 있을 시, 중복되기에 에러가 뜬다.
};

int main()
{
	using namespace std;

	Color paint = COLOR_BLACK;
	Color house(COLOR_BLUE);
	Color appe{ COLOR_RED }; // uniform initialization은 다른 것들과 조금 뉘앙스에서 다르다.
							 // color의 색깔이 다른 이유는 bulid in 타입, 기본 자료형 타입이 아니기 때문이다. (ex.string)
	cout << paint << " " << COLOR_BLACK << endl;

	/*cin >> house; // 이 경우 cin 으로 직접 받을 순 없으니 우회한다!
	int in_number;
	cin >> in_number;

	if (in_number == 2)
	{
		house = COLOR_BLUE;
	}*/

	/*string str_input;
	std::getline(cin, str_input);
	if(str_input == "COLOR_BLUE")*/
	// 이런 경우 color_blue를 소문자로 입력할지도 모르고, 입력자가 사람이기에 오타가 날수도 있다.
	
		
	return 0;
}