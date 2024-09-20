#include "Monster.h"

using namespace std;

int main()
{
	Monster mon1("Sanson", Position2D(0, 0));
	//mon1.m_location;

	Monster mon2("Parsival", Position2D(0, 0));
	//mon2.m_location;

	cout << mon1 << endl;

	//while (1) // game loop
	{
		// event
		mon1.moveTo(Position2D(1, 1)); // or using random number
		cout << mon1 << endl;
	}

	return 0;
}