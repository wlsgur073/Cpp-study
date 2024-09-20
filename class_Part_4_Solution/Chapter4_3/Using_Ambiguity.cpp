#include <iostream>

namespace a
{
	int my_var(10);
	int count(123); // @1
}

namespace b
{
	int my_var(20); // 큰 프로젝트를 하다보면 네임스페이스 안에 같은 함수들이 있을 경우가 빈번하다.
}


int main()
{
	using namespace std;

	// using namespace a;
	// using namespace b;

	// cout << my_var << endl; // 같은 이름의 함수이기에 모호성(Ambiguity)이 발생함!
	// cout << a::my_var << endl; // 이런 식으로 영역 지정(해당 영역 ::)을 앞에 붙혀주면 해결된다.
	
	{
		using namespace a; // 영역 쪼개도 됨.
		cout << my_var << endl; // 이런 식으로 표현할 때는 a{}도 b{}도 만들어 줘야 한다.
		cout << a::count << endl; // @1 위 using namespace를 쓰고 있기에, 영역 지정으로 선언하는게 좋다.
		// @1 다만 이렇게 될 경우, using namespace a는 사용하기 어려워진다. 즉, 영역 지정으로 설정해주는 게 편리하다.
	}

	{
		using namespace b;
		cout << my_var << endl;
	}

	return 0;
}