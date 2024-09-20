#include <iostream>

using namespace std;

int main()
{
	char myString[] = "string";
	// char�� 7���ڷ� �ߴ� ������ "string\0" �ڿ� null(\0) ���� �־ �׷���.

	for (int i = 0; i < 7; ++i)
	{
		cout << (int)myString[i] << endl; // �ƽ�Ű �ڵ�� Ȯ�� ����!
	}

	cout << sizeof(myString) / sizeof(myString[0]) << endl;
	// char�� 1����Ʈ�� "string"�� 7���� ���ڿ��̴� 7����Ʈ.
	// ����, myString[0] = 1 byte, [7 / 1 = 7] ����� ����.


	return 0;
}

// <Memo>

// unsigned char myString[255]�� �ִµ�,  myString[4] = '\0' ���� �����ϸ�
// myString[0~3]������ ��µǰ� �� �� [4~255]������ ��µ��� �ʴ´�. ��, '\0'�� ���ڿ� ������ �ǹ̰� �ִ�.
// ���Ⱑ �ʿ��ϸ� cin.getline(����, �迭)�� �̿�����!