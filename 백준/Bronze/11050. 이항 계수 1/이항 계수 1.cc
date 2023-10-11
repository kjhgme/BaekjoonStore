#include <iostream>
using namespace std;

int bino_coef(int n, int k)
{
	int num{1};

	if (k == 0 or n == k)
		return 1;

	for (int i = 1; i <= n; ++i)
	{
		num *= i;
	}

	for (int i = 1; i <= k; ++i)
	{
		num /= i;
	}
	for (int i = 1; i <= (n - k); ++i)
	{
		num /= i;
	}


	return num;
}

int main()
{
	int n{}, k{};

	cin >> n >> k;

	cout << bino_coef(n, k);
}