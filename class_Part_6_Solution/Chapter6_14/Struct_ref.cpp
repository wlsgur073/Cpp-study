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

	ot.st.v1 = 1;		// ��� �̷� ������ �ϸ� �����ϴ�.

	int &v1 = ot.st.v1;	// ref�� �̿��ؼ� �����ϰ� �ٿ�����.
	v1 = 2;				// �̷��� ���۷����� ���� ȿ���� ����!


	return 0;
}