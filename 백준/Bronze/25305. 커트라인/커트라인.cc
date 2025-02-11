#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, k;
	vector<int> v;

	cin >> n >> k;

	for (int i = 0; i < n; ++i)
	{
		int x = 0;
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());

	cout << v[n - k];
}