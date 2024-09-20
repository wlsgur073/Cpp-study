#include <iostream>

using namespace std;

int main()
{
	// const int num_stduents = 5;
	int scores[] = { 84,92,76,81,56 };
	const int num_stduents = sizeof(scores) / sizeof(int); // �̷��� ���Ҽ��� �ִ�.
	
	int max_score = 0; // #1 for�ȿ��� �ְ� ������ ã�� ���!
	int total_score = 0;
	int min_score = 100;

	for (int i = 0; i < num_stduents; ++i)
	{
		//cout << scores[i] << endl;
		total_score += scores[i];
		max_score = (max_score < scores[i]) ? scores[i] : max_score; // �̷����ϸ� �ְ� ������ ã�� �� �ִ�.
		if (min_score > scores[i])  min_score = scores[i];
	}

	// int total_score = scores[0] + scores[1] + scores[2] + scores[3] + scores[4];
	
	double avg_score = (double)total_score / num_stduents;
	
	/*printf("�ְ� ������ : %d\n", max_score);
	printf("�ּ� ������ : %d\n", min_score);
	printf("������ : %d\n", total_score);
	printf("����� : %f\n", avg_score);*/

	return 0;
}