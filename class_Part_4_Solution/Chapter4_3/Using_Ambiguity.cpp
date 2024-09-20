#include <iostream>

namespace a
{
	int my_var(10);
	int count(123); // @1
}

namespace b
{
	int my_var(20); // ū ������Ʈ�� �ϴٺ��� ���ӽ����̽� �ȿ� ���� �Լ����� ���� ��찡 ����ϴ�.
}


int main()
{
	using namespace std;

	// using namespace a;
	// using namespace b;

	// cout << my_var << endl; // ���� �̸��� �Լ��̱⿡ ��ȣ��(Ambiguity)�� �߻���!
	// cout << a::my_var << endl; // �̷� ������ ���� ����(�ش� ���� ::)�� �տ� �����ָ� �ذ�ȴ�.
	
	{
		using namespace a; // ���� �ɰ��� ��.
		cout << my_var << endl; // �̷� ������ ǥ���� ���� a{}�� b{}�� ����� ��� �Ѵ�.
		cout << a::count << endl; // @1 �� using namespace�� ���� �ֱ⿡, ���� �������� �����ϴ°� ����.
		// @1 �ٸ� �̷��� �� ���, using namespace a�� ����ϱ� ���������. ��, ���� �������� �������ִ� �� ���ϴ�.
	}

	{
		using namespace b;
		cout << my_var << endl;
	}

	return 0;
}