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
	string name;*/ // enum을 써서 인종을 표현할수도 있다.

	// person me {2.0, 100.0, 20, "KIM"}; // 이럴 때 uniform initialization이 사용됨. struct 순서대로 기입.
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