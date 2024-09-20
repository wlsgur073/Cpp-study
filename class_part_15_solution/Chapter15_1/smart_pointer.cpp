#include "Resource.h"
#include "AutoPtr.h"

using namespace std;
// RAII :resource acquisition is initialization

void doSomething()
{
	try
	{
		//Resourse* res = new Resourse; // dull pointer
		AutoPtr<Resource> res = new Resource; // smart pointer
		   // work with res
		if (true)
		{
			throw - 1;
		}
		//delete res;
	}
	catch(...)
	{ }
}

int main()
{
	AutoPtr<Resource> res1(new Resource);
	AutoPtr<Resource> res2;

	cout << std::boolalpha;

	cout << res1.m_ptr << endl;
	cout << res2.m_ptr << endl;

	res2 = res1;

	cout << res1.m_ptr << endl;
	cout << res2.m_ptr << endl;

	
	return 0;
}