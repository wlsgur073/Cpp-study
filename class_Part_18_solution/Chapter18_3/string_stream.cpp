#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	stringstream os;
	
	int i = 12345;
	double d = 67.89;

	os << i << " " << d;

	int i2;
	double d2;

	os >> i2 >> d2;
	cout << i2 << " | " << d2 << endl;

	return 0;
}