#include <iostream>
#include <exception>
#include <string>

using namespace std;

class CustomException : public std::exception
{
public:
	const char* what() const noexcept override
	{
		return "Coustom exception";
	}
};

int main()
{
	try
	{
		//throw std::runtime_error("Bad thing happened");
		throw CustomException();
	}
	catch (std::exception& exception)
	{
		cout << typeid(exception).name() << endl;
		cerr << exception.what() << endl;
	}
	return 0;
}