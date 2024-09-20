#include <iostream>
#include <string>
#include <vector>
#include <sstream> // string stream�� ����
using namespace std;

template <typename T>
std::string ToString(T x)
{
	std::ostringstream osstream;
	osstream << x; // x��� ���� �ִ´�
	return osstream.str();
	// osstream���� ���� �� ������� string���� �ٲ㼭 ������ ���ش�.
}

template <typename T>
bool FromString(const std::string& str, T& x)
{
	std::istringstream isstream(str);
	return (isstream >> x) ? true : false;
}

int main()
{
	string my_str("Hello");
	
	double d;

	if (FromString(my_str, d))
		cout << d << endl;
	else
		cout << "Cannot covert string to double" << endl;
	
	return 0;
}