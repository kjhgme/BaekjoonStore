#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int x, y;

	vector<vector<long long>>v(n, vector<long long>(n));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> v[i][j];

			if (v[i][j] == 0)
			{
				x = i;
				y = j;
			}
		}
	}

	long long sum = 0;
	if (x != 0)
		sum = accumulate(v[0].begin(), v[0].end(), 0LL);
	else
		sum = accumulate(v[1].begin(), v[1].end(), 0LL);

	long long temp = accumulate(v[x].begin(), v[x].end(), 0LL);
	v[x][y] = sum - temp;
	if (sum < temp)
	{
		cout << -1;
		return 0;
	}

	for (int i = 0; i < n; ++i)
	{
		long long num = accumulate(v[i].begin(), v[i].end(), 0LL);

		if (num != sum)
		{
			cout << -1;
			return 0;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		long long num = 0;

		for (int j = 0; j < n; ++j)
		{
			num += v[j][i];
		}

		if (num != sum)
		{
			cout << -1;
			return 0;
		}
	}

	long long num = 0;
	for (int i = 0; i < n; ++i)
	{
		num += v[i][i];
	}
	if (num != sum)
	{
		cout << -1;
		return 0;
	}

	num = 0;
	for (int i = 0; i < n; ++i)
	{
		num += v[n - i - 1][i];
	}
	if (num != sum)
	{
		cout << -1;
		return 0;
	}

	cout << v[x][y];
}