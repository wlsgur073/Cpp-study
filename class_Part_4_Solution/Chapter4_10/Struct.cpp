#include <iostream>
#include <string>

using namespace std;

struct person
{
	double height;
	float weight;
	int age;
	string name;

	void print()
	{
		cout << weight << " " << height << " " << age << " " << name;
		cout << endl;
	}
};

/*void printPerson(person ps)
{
	cout << ps.weight << " " << ps.height << " " << ps.age << " " << ps.name;
	cout << endl;
}*/

person getMe()
{
	person me{ 2.0, 100.0, 20, "KIM" };
	return me;
}

int main()
{
	/*double height;
	float weight;
	int age;
	string name;*/ // enum�� �Ἥ ������ ǥ���Ҽ��� �ִ�.

	// person me {2.0, 100.0, 20, "KIM"}; // �̷� �� uniform initialization�� ����. struct ������� ����.
	/*me.age = 20;
	me.name = "KIM";
	me.height = 2.0;*/
	//printPerson(me);
	//me.print();

	person me_from_func = getMe();
	me_from_func.print();
	person dad;

	return 0;
}