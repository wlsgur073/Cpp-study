//#pragma once // #3 헤더 가드가 없을 시, 빌드에 오류 발생

#ifndef My_ADD // #1 pragma once가 작동하지 않으면 이렇게 표현할 수 있다
#define My_ADD // #2 My_ADD가 정의되어 있을 경우, 1번만 작동하겠금 하는 명령어

int add(int i, int j)
{
	return i + j;
}
#endif