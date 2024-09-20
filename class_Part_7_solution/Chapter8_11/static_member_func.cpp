#include <iostream>
#include <string>

using namespace std;

class Something
{
public:

	class A
	{
	public:
		A() // »ý¼ºÀÚ
		{
			s_value = 1234;
		}
	};

private:
	static int s_value;
	int m_value;

	static A s_innitializer;

public:
	static int getValue()
	{
		return s_value;
	}

	int temp()
	{
		return this->s_value;
	}
};

int Something::s_value = 1024;
Something::A Something::s_innitializer;

int main()
{
	cout << Something::getValue() << endl;

	Something s1, s2;
	cout << s1.getValue() << endl;

	/*int (Something:: * fptr)() = &Something::temp;
	cout << (s2.*fptr)() << endl;
	int (* fptr2)() = &Something::getValue;*/

	return 0;
}