#include <iostream>
// 본 챕터는 해더 가드가 왜 필요한 지에 관한 내용입니다.

using namespace std;

#include "add.h"
#include "doSomething.h"

int main()
{
	doSomething();

	return 0;
}