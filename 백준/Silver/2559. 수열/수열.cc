#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	vector<int>v(n);
	int biggest = INT_MIN;

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	for (int i = 0; i < n - k + 1; ++i)
	{
		int sum = 0;
		for (int j = i; j < i + k; ++j)
		{
			sum += v[j];
		}

		if (biggest < sum)
			biggest = sum;
	}

	cout << biggest;
}