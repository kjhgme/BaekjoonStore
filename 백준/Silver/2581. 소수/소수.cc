#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n;
	cin >> m;

	int cnt{};
	int prime_num{};
	int first_prime{};

	for (int i = m; i >= n; --i)
	{
		cnt = 0;

		if (i == 1)
			continue;

		for (int j = 2; j < i; ++j)
		{
			if (i % j == 0) {
				cnt++;
				break;
			}
		}

		if (cnt == 0) {
			prime_num += i;
			first_prime = i;
		}
	}

	if (prime_num == 0)
		cout << -1 << endl;
	else {
		cout << prime_num << endl;
		cout << first_prime << endl;
	}
}