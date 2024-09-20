#include <iostream>
#include <bitset>

int main()
{
	// ���� ��쿡 ���� �÷��׸� �ٲ㺸����.
	// ��縦 ���� ��, ����� ���ƿ並 Ŭ������ ��, ����� ���ƿ丣�� �ٽ� Ŭ������ ��, �� ��縸 ������ ��.

	using namespace std;
	unsigned char opt_viewed	= 0x01; // 1
	unsigned char opt_edited	= 0x02; // 2
	unsigned char opt_liked		= 0x04; // 4
	unsigned char opt_shared	= 0x08; // 8
	unsigned char opt_deleted	= 0x80; // 80

	unsigned char my_article_flags = 0;

	my_article_flags |= opt_viewed;
	cout << "viewed \t" << bitset<8>(my_article_flags) << endl;

	my_article_flags |= opt_edited;
	cout << "edited \t" << bitset<8>(my_article_flags) << endl;

	my_article_flags |= opt_liked;
	cout << "liked \t" << bitset<8>(my_article_flags) << endl;

	my_article_flags &= ~opt_liked; //unlike
	cout << "liked \t" << bitset<8>(my_article_flags) << endl;

	my_article_flags |= opt_shared;
	cout << "shared \t" << bitset<8>(my_article_flags) << endl;

	my_article_flags |= opt_deleted;
	cout << "deleted \t" << bitset<8>(my_article_flags) << endl;

	return 0;
}