#include <iostream>

int main()
{
	using namespace std;

	// 논리 연산자 학습

	// 1. logical NOT "!="
	// bool x = true;
	// cout << !x << endl;

	// 2. logical AND "&&"
	// bool a = true;
	// bool b = false;

	// cout << (a && b) << endl; // 연산자 오류는 우선순위때문에 나는 것. 괄호를 달아줄 것.
	
	// 게임에서 맞았을 때 사용하는 예시
	// bool hit = true;
	// int health = 10;

	/*if (hit == true && health < 20) // 체력이 20보다 작고, hit을 맞으면 if 실행 / hit만 써도 true값으로 인식함.
	{
		cout << "die" << endl;
	}
	else // 그렇지 않으면 체력 20만 깍인다.
		health -= 20;*/

	// 3. logical or "||"
	//bool a = true;
	// bool b = false;
	// cout << (a || b) << endl; // 둘 중 하나만 true여도 true

	// 잘못된 예시
	// int x = 5; // 0이 아닌 숫자는 true
	// int y = 5; // == 는 값이 같은지 확인하는 것, &&는 논리 연산자가 같을때 표현함
	/*if (x == y) // 이는 (!(x == y))가 아니다. ((!x) = y)이다. 5는 0이 아니니 true인데 !x로 인해서 false이고 7은 true니까 같지 않다.
	{
		cout << " x does not equal y" << endl; // !의 사용 범위의 이해가 필요. 아직 100% 이해하지 못했음
	}
	else
		cout << " x equals y " << endl;*/ // 5 == 7은 같지 않은데 같다고 나옴
	// x값을 false으로 지정해두고 !x임으로 true == true로 if가 실행되어야 하는데 자꾸 else가 실행됨...

	//-------------------------------------------------------------------------------------------------------

	// int x = 2; // #1 x = 1일 경우, if문을 실행하고 출력값이 나오기에 y는 3
	// int y = 2;

	// if (x == 1 && y++ == 2)
	// {
		 //do something
	// }
	// #2 x = 2일 경우 if문 왼쪽부터 컴파일 중
	// #2 x == 1이 false이기에 뒤의 것도 보지 않고 if를 중단한 상태로 y값 출력. 그러므로 y = 2

	// cout << y << endl;

	// De Morgan's Law 드모르간 법칙
	// !(x && y); == !x && !y;라고 분배 법칙에 의하여 생각할 수 있지만, 다르다!
	// !(x && y) == !x || !y
	// !(x || y) == !x && !y 로 표현됨.

	// XOR // or(||)이 아니라는 거임
	// 왼쪽, 오른쪽 항이 boolean일 경우. int는 static으로 bool로 변환.
	// (flase, flase) = flase
	// (flase, true) = true
	// (true, flase) = true
	// (true, true) = false

	bool x = true;
	bool y = false;

	// cout << (x != y) << endl;

	cout << !(2314123 > 2 || 123123 > 2387) << endl;
	//(false && false) || true;


	return 0;
}