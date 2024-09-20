#include <iostream>

using namespace std;

struct Something
{
	int a, b, c, d; // 4 x 4 = 16 bytes
};

int main()
{
	int x = 5;

	//int * ptr_x = &x;						// 띄어쓰기를 중요. 주석1 참고.
	/*cout << ptr_x << endl;				// 담은 메모리 주소 출력해줌
	cout << *ptr_x << endl;					// 그 메모리 주소의 데이터를 불러옴
	cout << typeid(ptr_x).name() << endl;*/	// 데이터 타입을 알려줌.

	double d = 123.0;
	int* ptr_x; // 이 상태에서 ptr_x를 출력하려 하면 에러가 뜬다. 왜냐하면 ptr_x 초기화가 안 되어 있기 때문!
	double* ptr_d;

	cout << sizeof(x) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl; // 주석2 참고
	
	Something ss;
	Something *ptr_s = &ss;

	cout << sizeof(Something) << endl;	// 16btyes	
	cout << sizeof(ptr_s) << endl;		// 4btyes 주소 값이라 4바이트.
	

	cout << "--------------------------------" << endl;
	cout << &ss << endl; // 포인팅한 구조체의 주소는 구조체 변수 첫 번째 변수의 주소와 같다!
	int pos_a = (int)&(ptr_s->a);
	int pos_b = (int)&(ptr_s->b);

	cout << pos_a << endl;
	cout << pos_b << endl;

	return 0;
}

// #1. int* ptr_x = &x, ptr_y = &x;인 경우
// 앞에 x만 포인터로 적용되고 y는 적용되지 않는다.
// typedef int* pint; 이런 식으로 int pointer를 pint라는 가상 데이터 타입을 만들고,
// pint ptr_x = &x, ptr_y = &x 에 적용하면 둘 다 포인터로 적용된다.
// 주로 *은 해당 포인터 변수 바로 앞이나, 데이터 타입 * 포인터 변수. 이렇게 양쪽 띄어쓰기식으로 표현한다.

// #2. double 자체는 8바이트인데, double의 주소가 4바이트로 나오는 이유는?
// 주소 자체를 저장하는 바이트는 고정이다. x64로 돌리면 x86보다 더 많이 저장할 수 있기에 주소 고정갑싱 8bytes이다.
// 정리 : 포인터 변수의 사이즈는 포인터가 가리키고 있는 데이터의 사이즈와는 상관 없이 동일하다!!