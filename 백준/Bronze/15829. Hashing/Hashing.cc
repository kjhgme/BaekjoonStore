#include <iostream>
#define M 1234567891
using namespace std;

int main()
{
	int l{};
	string s{};
	long long hash{}, r{1};

	cin >> l;
	cin >> s;

	for (int i = 0; i < s.size(); ++i)
	{
		hash += ((s[i] - 'a' + 1) * r) % M;
		r = (r * 31) % M;
	}

	printf("%lld\n", hash);
}