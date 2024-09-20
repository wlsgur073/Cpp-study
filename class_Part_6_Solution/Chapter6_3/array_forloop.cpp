#include <iostream>

using namespace std;

int main()
{
	// const int num_stduents = 5;
	int scores[] = { 84,92,76,81,56 };
	const int num_stduents = sizeof(scores) / sizeof(int); // 이렇게 구할수도 있다.
	
	int max_score = 0; // #1 for안에서 최고 점수를 찾는 방법!
	int total_score = 0;
	int min_score = 100;

	for (int i = 0; i < num_stduents; ++i)
	{
		//cout << scores[i] << endl;
		total_score += scores[i];
		max_score = (max_score < scores[i]) ? scores[i] : max_score; // 이렇게하면 최고 점수를 찾을 수 있다.
		if (min_score > scores[i])  min_score = scores[i];
	}

	// int total_score = scores[0] + scores[1] + scores[2] + scores[3] + scores[4];
	
	double avg_score = (double)total_score / num_stduents;
	
	/*printf("최고 점수는 : %d\n", max_score);
	printf("최소 점수는 : %d\n", min_score);
	printf("총점은 : %d\n", total_score);
	printf("평균은 : %f\n", avg_score);*/

	return 0;
}