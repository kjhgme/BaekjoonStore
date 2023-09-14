#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, char> a, pair<int, char> b) {
	return a.first < b.first;
}

int main()
{
	string s;
	int cnt{};
	char ans{};
	bool equal = false;

	vector<pair<int, char>> v;

	cin >> s;

	for (int i = 0; i < s.size(); ++i)
	{
		s[i] = toupper(s[i]);
	}

	for (int i = 'A'; i <= 'Z'; ++i) 
	{
		for (int j = 0; j < s.size(); ++j)
		{
			if (s[j] == char(i))
			{
				cnt++;
			}
		}

		v.push_back(make_pair(cnt, char(i)));
		
		cnt = 0;
	}

	auto max = max_element(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); ++i)
	{
		if (equal == true && (*max).first == v[i].first)
		{
			ans = '?';
			break;
		}
		else if ((*max).first == v[i].first)
		{
			ans = v[i].second;
			equal = true;
		}
	}

	cout << ans;
}