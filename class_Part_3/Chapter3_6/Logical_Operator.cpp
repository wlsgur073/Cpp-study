#include <iostream>

int main()
{
	using namespace std;

	// �� ������ �н�

	// 1. logical NOT "!="
	// bool x = true;
	// cout << !x << endl;

	// 2. logical AND "&&"
	// bool a = true;
	// bool b = false;

	// cout << (a && b) << endl; // ������ ������ �켱���������� ���� ��. ��ȣ�� �޾��� ��.
	
	// ���ӿ��� �¾��� �� ����ϴ� ����
	// bool hit = true;
	// int health = 10;

	/*if (hit == true && health < 20) // ü���� 20���� �۰�, hit�� ������ if ���� / hit�� �ᵵ true������ �ν���.
	{
		cout << "die" << endl;
	}
	else // �׷��� ������ ü�� 20�� ���δ�.
		health -= 20;*/

	// 3. logical or "||"
	//bool a = true;
	// bool b = false;
	// cout << (a || b) << endl; // �� �� �ϳ��� true���� true

	// �߸��� ����
	// int x = 5; // 0�� �ƴ� ���ڴ� true
	// int y = 5; // == �� ���� ������ Ȯ���ϴ� ��, &&�� �� �����ڰ� ������ ǥ����
	/*if (x == y) // �̴� (!(x == y))�� �ƴϴ�. ((!x) = y)�̴�. 5�� 0�� �ƴϴ� true�ε� !x�� ���ؼ� false�̰� 7�� true�ϱ� ���� �ʴ�.
	{
		cout << " x does not equal y" << endl; // !�� ��� ������ ���ذ� �ʿ�. ���� 100% �������� ������
	}
	else
		cout << " x equals y " << endl;*/ // 5 == 7�� ���� ������ ���ٰ� ����
	// x���� false���� �����صΰ� !x������ true == true�� if�� ����Ǿ�� �ϴµ� �ڲ� else�� �����...

	//-------------------------------------------------------------------------------------------------------

	// int x = 2; // #1 x = 1�� ���, if���� �����ϰ� ��°��� �����⿡ y�� 3
	// int y = 2;

	// if (x == 1 && y++ == 2)
	// {
		 //do something
	// }
	// #2 x = 2�� ��� if�� ���ʺ��� ������ ��
	// #2 x == 1�� false�̱⿡ ���� �͵� ���� �ʰ� if�� �ߴ��� ���·� y�� ���. �׷��Ƿ� y = 2

	// cout << y << endl;

	// De Morgan's Law ��𸣰� ��Ģ
	// !(x && y); == !x && !y;��� �й� ��Ģ�� ���Ͽ� ������ �� ������, �ٸ���!
	// !(x && y) == !x || !y
	// !(x || y) == !x && !y �� ǥ����.

	// XOR // or(||)�� �ƴ϶�� ����
	// ����, ������ ���� boolean�� ���. int�� static���� bool�� ��ȯ.
	// (flase, flase) = flase
	// (flase, true) = true
	// (true, flase) = true
	// (true, true) = false

	bool x = true;
	bool y = false;

	// cout << (x != y) << endl;

	cout << !(2314123 > 2 || 123123 > 2387) << endl;
	//(false && false) || true;


	return 0;
}