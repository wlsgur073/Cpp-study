#include "AutoPtr.h"
#include "Resource.h"

AutoPtr<Resource> generateResource()
{
	AutoPtr<Resource> res(new Resource(10000000));
	return res;
}

int main()
{
	using namespace std;

	streambuf* oring_buf = cout.rdbuf();
	//cout.rdbuf(NULL); // disconnect cout from buffer

	{
		AutoPtr<Resource> main_res;
		main_res = generateResource();
	}
	cout.rdbuf(oring_buf);
	return 0;
}