#include <iostream>
// #include "add.h" // #3 해더파일과 연결!
#include "test add/add.h" // #4 폴더 안에 헤더파일을 넣었을 경우, 그 경로 표시!
using namespace std;

//	int add(int i, int j); // #1 매번 이렇게 긁어 붙이기가 번거롭다!
//	#2 그래서 해더 파일을 만들어서 그 곳에 붙어 넣는다!

int main()
{
	cout << add(1, 2) << endl;
	return 0;
}