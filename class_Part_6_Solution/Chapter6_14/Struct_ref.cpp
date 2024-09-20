#include <iostream>

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};

int printStruct()
{
	Other ot;

	ot.st.v1 = 1;		// 계속 이런 식으로 하면 불편하다.

	int &v1 = ot.st.v1;	// ref를 이용해서 간결하게 줄여주자.
	v1 = 2;				// 이렇게 레퍼런스를 쓰면 효율이 좋다!


	return 0;
}