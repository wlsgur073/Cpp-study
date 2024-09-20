#include <iostream>
#include <limits>
#include <iomanip> // in&out manipulate
#include <cmath>

int main()
{

	using namespace std;

	//float f(3.14f); // 3.14 = 31.4 * 0.1
	
	// 31.4e-1 = 31.4 * 10의 - 1제곱

	cout << 31.4e-1 << endl;
	cout << 31.4e-2 << endl; // 31.4 * 10의 -2제곱, 즉 0.01
	cout << 31.4e2 << endl; // 31.4 * 10의 2제곱


	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<long double>::min() << endl;
	// min은 표현할 수 있는 최솟 절대값을 보여주고, lowest는 사용 가능 범위의 최솟값을 보여줌


	// cout << std::setprecision(16); // #2. 16으로 설정하면 16자까지 출력된다.
	// cout << 1.0 / 3.0 << endl; // #1. 0.333333까지만 출력됨.

	float l(123456789.0f); // 10 significant digits
	cout << std::setprecision(9); // 1~9까지 출력될 것으로 기대하지만 실제 출력값은 다르다.
	cout << l << endl; // 123456792로 출력됨. 내부적으로 이진수로 저장하기에 사람의 생각과 다르다.
	//이런 것들이 누적이 되면 큰 오류로 발생될 것이다. 게임 내에서는 버그의 원인일수도 있음.

	double d1(1.0);
	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

	cout << setprecision(17);
	cout << d1 << endl;
	cout << d2 << endl; // d1와 d2가 같은 거라고 생각하지만 실제로 프로그래밍에서는 다르다!
	// 버그의 요인 중요하다.

	double x = 4 * 2 / 100.0;
	cout << x << endl;

	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;
	double one = 0.1;

	cout << posinf << " " << std::isinf(posinf) << endl;
	cout << neginf << " " << std::isinf(neginf) << endl;
	cout << nan << " " << std::isnan(nan) << endl;
	cout << one << " " << std::isnan(one) << endl; // 이 함수는 nan이 아니다 라는 것을 알 수 있음.

	return 0;
}