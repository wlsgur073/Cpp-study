#include <iostream>
#include <limits>
#include <iomanip> // in&out manipulate
#include <cmath>

int main()
{

	using namespace std;

	//float f(3.14f); // 3.14 = 31.4 * 0.1
	
	// 31.4e-1 = 31.4 * 10�� - 1����

	cout << 31.4e-1 << endl;
	cout << 31.4e-2 << endl; // 31.4 * 10�� -2����, �� 0.01
	cout << 31.4e2 << endl; // 31.4 * 10�� 2����


	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<long double>::min() << endl;
	// min�� ǥ���� �� �ִ� �ּ� ���밪�� �����ְ�, lowest�� ��� ���� ������ �ּڰ��� ������


	// cout << std::setprecision(16); // #2. 16���� �����ϸ� 16�ڱ��� ��µȴ�.
	// cout << 1.0 / 3.0 << endl; // #1. 0.333333������ ��µ�.

	float l(123456789.0f); // 10 significant digits
	cout << std::setprecision(9); // 1~9���� ��µ� ������ ��������� ���� ��°��� �ٸ���.
	cout << l << endl; // 123456792�� ��µ�. ���������� �������� �����ϱ⿡ ����� ������ �ٸ���.
	//�̷� �͵��� ������ �Ǹ� ū ������ �߻��� ���̴�. ���� �������� ������ �����ϼ��� ����.

	double d1(1.0);
	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

	cout << setprecision(17);
	cout << d1 << endl;
	cout << d2 << endl; // d1�� d2�� ���� �Ŷ�� ���������� ������ ���α׷��ֿ����� �ٸ���!
	// ������ ���� �߿��ϴ�.

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
	cout << one << " " << std::isnan(one) << endl; // �� �Լ��� nan�� �ƴϴ� ��� ���� �� �� ����.

	return 0;
}