#include <iostream>
#include <vector>

int main()
{
	using namespace std;

	typedef double distance_t; // distance_t�� double�� ��.

	// vector<pair<string, int> > pairlist;
	// vector<> �ȿ� pair�� �ְ�, pair<>�ȿ� string, int�� �ִ�.
	
	// vector<pair<string, int> > pairlist1;
	// vector<pair<string, int> > pairlist2;
	// �Ź� �̷��� ������ �ݺ��Ǹ�, �ڷ����� ���� �����ϰ� ǥ�� ����!

	// typedef vector<pair<string, int> > pairlist_t;
	using pairlist_t = vector<pair<string, int> >; // �̷� �����ε� ǥ�� ����!

	pairlist_t pairlist1;
	pairlist_t pairlist2;

	return 0;
}