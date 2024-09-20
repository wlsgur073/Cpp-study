#include <iostream>
#include <string>
#include <vector>
#include <sstream> // string stream의 약자
using namespace std;

template <typename T>
std::string ToString(T x)
{
	std::ostringstream osstream;
	osstream << x; // x라는 뭔가 넣는다
	return osstream.str();
	// osstream으로 들어온 걸 뭐가됬든 string으로 바꿔서 리턴을 해준다.
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