#include "Resource.h"
using namespace std;


int main()
{

	{
		auto ptr1 = std::make_shared<Resource>(3);
		ptr1->setAll(1);
		ptr1->print();

		{
			//std::shared_ptr<Resource> ptr2(res);
			auto ptr2 = ptr1;
			
			ptr2->setAll(3);
			ptr2->print();
		}
	}


	return 0;
}