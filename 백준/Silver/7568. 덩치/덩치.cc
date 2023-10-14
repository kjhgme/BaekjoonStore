#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n{};
	int x{}, y{};
	vector<pair<int, int>> v;
	vector<int> ans;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}

	int temp{};
	for (int i = 0; i < v.size(); ++i)
	{
		temp = 0;
		for (int j = 0; j < v.size(); ++j) {
			if (v[i].first < v[j].first && v[i].second < v[j].second) {
				temp++;
			}
		}
		ans.push_back(temp);
	}

	for (int i = 0; i < ans.size(); ++i)
		cout << ans[i]+1 << endl;
}