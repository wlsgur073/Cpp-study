#include <iostream>

using namespace std;

namespace Myspace1
{
	namespace InnerSpace
	{
		int my_function()
		{
			return 0;
		}
	}
	int doSomething(int i, int j)
	{
		return i + j;
	}
}

namespace Myspace2
{
	int doSomething(int i, int j)
	{
		return i * j;
	}
}

int main()
{
	using namespace Myspace1;
	using namespace Myspace1::InnerSpace;

	cout << doSomething(3, 4) << endl;
	my_function();

	//Myspace1::InnerSpace::my_function();
	// Myspace1�� �̹� �ѹ� ���Ǿ� �Ǵٸ� namespace�� �����ؾ� �Ѵ�.
	//cout << Myspace1::doSomething(3, 4) << endl;

	return 0;
}