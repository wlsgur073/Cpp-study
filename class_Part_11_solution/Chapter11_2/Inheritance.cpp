#include "Student.h"
#include "Teacher.h"

int main()
{
	using namespace std;

	std::string name;

	Student std("Jack Jack");
	std.setName("Jack Jack 2");
	std.getName();

	Teacher teacher1("Dr. H");
	teacher1.setName("Dr. K");

	std.study();
	teacher1.teach();
	cout << std << endl;
	cout << teacher1 << endl;

	return 0;
}