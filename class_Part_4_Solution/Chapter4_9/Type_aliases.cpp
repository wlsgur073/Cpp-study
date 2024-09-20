#include <iostream>
#include <vector>

int main()
{
	using namespace std;

	typedef double distance_t; // distance_t가 double이 됨.

	// vector<pair<string, int> > pairlist;
	// vector<> 안에 pair가 있고, pair<>안에 string, int가 있다.
	
	// vector<pair<string, int> > pairlist1;
	// vector<pair<string, int> > pairlist2;
	// 매번 이렇게 여러번 반복되면, 자료형을 만들어서 간단하게 표현 가능!

	// typedef vector<pair<string, int> > pairlist_t;
	using pairlist_t = vector<pair<string, int> >; // 이런 식으로도 표현 가능!

	pairlist_t pairlist1;
	pairlist_t pairlist2;

	return 0;
}