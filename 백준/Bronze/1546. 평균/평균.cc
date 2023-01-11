#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	int m;

	vector<int> v;
	cin >> n;

	float best{};
	float sum{};
	for (int i = 0; i < n; ++i)
	{
		cin >> m;
		v.push_back(m);
		if (m > best)
			best = m;
	}

	for (int i = 0; i < n; ++i)
	{
		sum += v[i] / best * 100;
	}

	cout << sum / n;
}