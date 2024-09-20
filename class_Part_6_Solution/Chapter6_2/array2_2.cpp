#include <iostream>

using namespace std;

// void doSomething �Ķ���� �ȿ� �ִ� �迭�� ������ �迭�� �ƴϰ� �������̴�.
// �ٸ�, �迭�� ���� �� ����� �� ���̶�� ���� ��Ȯ�ϰ� �����ֱ� ���ؼ� �ڵ��� ������ �ͻ�,
// ���� �ý��ۿ����� �Ķ���� ���� �����ͷ� �ν��Ѵ�.
void doSomething(int studnet_score[20]) // �ּ�#2
{
	cout << (size_t)&studnet_score << endl;	// ���� doSomething �ȿ� �Ű����� ���ǰ� �ִ� // �ּ�#3 // @1
	cout << studnet_score[0] << endl;		// �̰͵��� �迭�� �ƴϰ� ������ �����̴�.
	cout << studnet_score[1] << endl;
	cout << studnet_score[2] << endl;
	cout << "Size in doSomething " << sizeof(studnet_score) << endl;
}


int main()
{
	const int num_student = 20;
	int studnet_score[num_student] = { 1, 2, 3, 4, 5, }; // �ּ� #1 // @2

	cout << (size_t)&studnet_score << endl; // doSomething�� �ּҿ� �ٸ���.
	cout << &studnet_score[0] << endl;
	cout << studnet_score[1] << endl;
	cout << studnet_score[2] << endl;
	cout << "Size in main " << sizeof(studnet_score) << endl;

	doSomething(studnet_score); // �ּ�#2 

	return 0;
}

// �迭�� ���� ��ü�� �ּҷ� ���ȴ�. ex.) �� student_score�� �ּҷ� �νĵȴ�.
// #1. ����� ��, �ٷ� �迭�� ����Ǽ� ������ü�� �ּ��̱⿡ �ּҿ�����(&)�� ��� ��� ����.
// #2. main{} �ȿ� �ִ� doSomething() �ȿ� �ִ� student_score�� �ּ� ���� �޾Ƽ�
// #2. �� void doSomething �Ķ���� �ȿ� �ִ� �迭ó�� ���̴� �����Ͱ� ����Ѵ�.
// #2. main () doSomething(student_score) �ּ� ���� -> void doSomething(int student_score[20])
// #2. �迭�� ��� ���Ҹ� �����ؼ� �������� ���� �ƴ϶�, ù ��° �ּ� ���� �����Ѵ�.
// #3. void doSomething �ȿ� ������ �Ǿ� �ִ� �Ű� ���� (int)&studnet_score�� �迭�� �ƴϰ�,
// #3. ������ �����̴�. � ������ ������!
// #3. main �ȿ� �ִ� doSomething(student_score)�� �ּҰ��� ���� ������ �����̱� ������ �� ��ü�� �ٸ� �ּҰ��� ���´�.
// #3. �ּҰ��� �����ϴ� �ٸ� �����̱� ������ �ٸ� ������ �ּҰ� �ʿ��ϴ�.
// �׷��� @1�� @2�� �ٸ� �ּҰ��� ������.
// �׷����� main �ȿ� �ִ� dosomething(student_score)���� �޾ƿ� ù ��° �ּҰ��� ���� ���� �ּҰ��� ���´�.
// 32��Ʈ������ ������ ����� 4����Ʈ, 64��Ʈ������ 8����Ʈ