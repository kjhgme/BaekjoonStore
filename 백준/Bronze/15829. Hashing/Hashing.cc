#include <iostream>
#define r 31
#define M 1234567891
using namespace std;

int main()
{
	int l{};
	string s{};
	long long hash{}, R{1};

	cin >> l;
	cin >> s;

	for (int i = 0; i < s.size(); ++i)
	{
		hash += ((s[i] - 'a' + 1) * R) % M;
		hash %= M;
		R = (R * r) % M;
	}

	printf("%lld\n", hash);
}