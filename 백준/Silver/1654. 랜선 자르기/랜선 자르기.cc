#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int k{}, n{};
	int x{};
	long long cnt{};
	vector<int> v;

	cin >> k >> n;

	for (int i = 0; i < k; ++i)
	{
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());


	long long left = 1;
	long long right = (v[v.size() - 1]);
	long long mid = (left+right) / 2;
	long long result{};

	while (left <= right)
	{
		mid = (left + right) / 2;
		cnt = 0;

		for (int i = 0; i < k; ++i)
		{
			cnt += v[i] / mid;
		}

		if (cnt >= n)
		{
			result = max(result, mid);
			left = mid + 1;
		}
		else
			right = mid - 1;
	}

	cout << result;
}