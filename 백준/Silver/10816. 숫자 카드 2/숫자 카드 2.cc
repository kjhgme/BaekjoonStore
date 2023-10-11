#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n{}, num{};
	int m{};
	vector<int> v;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	cin >> m;

	for (int i = 0; i < m; ++i)
	{
		cin >> num;
		printf("%d ", upper_bound(v.begin(), v.end(), num) - lower_bound(v.begin(), v.end(), num));
	}
}