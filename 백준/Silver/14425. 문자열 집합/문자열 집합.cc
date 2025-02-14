#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	set<string> s1;

	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;
		s1.insert(s);
	}

	vector<string> s2;
	s2.resize(m);

	for (int i = 0; i < m; ++i)
	{
		string s;
		cin >> s2[i];
	}

	int cnt = 0;

	set<string>::iterator iter;
	
	for (int i = 0; i < s2.size(); ++i)
	{
		iter = s1.find(s2[i]);

		if (iter != s1.end())
			cnt++;
	}

	cout << cnt;
}
