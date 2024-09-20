#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	cout << "주머니 속 동전은 ";
	cout << x;
	cout << "개 입니다." << endl;

	cout << "아람이는 주머니 속 동전의 절반을 가져갔습니다." << endl;
	int a = x / 2;
	x = x - a;
	
	cout << "죄책감을 느낀 아람이는 1개를 도로 넣었습니다." << endl;
	a = a - 1;
	x = x + 1;

	cout << "현재 주미너 속 동전 현황 ";
	cout << x;
	cout << "개" << endl;

	cout << "우람이가 동전을 가져갔습니다." << endl;
	int w = x / 2;
	x = x - w;

	cout << "우람이는 동전 2개를 더 꺼내 갔습니다." << endl;
	w = w + 2;
	x = x - 2;

	cout << "아람이가 가져간 동전의 갯수 ";
	cout << a;
	cout << "개" << endl;

	cout << "우람이가 가져간 동전의 갯수 ";
	cout << w;
	cout << "개" << endl;

	cout << "최종 주머니 속 동전 갯수는 ";
	cout << x;
	cout << "개 입니다." << endl;

	return 0;
}