#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int compare(pair<int, int> &x, pair<int, int> &y)
{
	if (x.second == y.second)
		return x.first < y.first;

	return x.second < y.second;
}

int main()
{
	int n{};
	int x{}, y{};
	vector<pair<int, int>> v;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; ++i)
	{
		printf("%d %d\n", v[i].first, v[i].second);
 	}
}