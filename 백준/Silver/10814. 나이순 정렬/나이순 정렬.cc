#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(const pair<int, string>& a, const pair<int, string>& b)
{
	if (a.first == b.first)
		return false;

	return a.first < b.first;
}

int main()
{
	int n{};
	vector <pair<int, string>> v;
	int age{};
	string name{};

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> age >> name;
		v.push_back(make_pair(age, name));
	}

	stable_sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; ++i)
	{
		cout << v[i].first << " " << v[i].second << "\n";
	}
}