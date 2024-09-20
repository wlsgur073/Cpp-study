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
	// Myspace1이 이미 한번 사용되어 또다른 namespace를 생성해야 한다.
	//cout << Myspace1::doSomething(3, 4) << endl;

	return 0;
}