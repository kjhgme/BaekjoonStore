#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b)
{
	if (a.size() == b.size()) {
		return a < b;
	}
	else
		return a.size() < b.size();
}

int main()
{
	string word;
	vector<string> v;
	int cnt{};
	cin >> cnt;

	for (int i = 0; i < cnt; ++i)
	{
		cin >> word;
		v.push_back(word);
	}

	sort(v.begin(), v.end(), compare);
	v.erase(unique(v.begin(), v.end()), v.end());
	
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << endl;
	}
}