#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int x{};
	int cnt{};
	string s;
	vector<string> v;
	vector<char> c;

	cin >> x;	

	for (int i = 0; i < x; ++i) {
		cin >> s;
		v.push_back(s);
	}
		

	for (int i = 0; i < x; ++i) {
		for (int j = 0; j < v[i].size(); ++j) {
			
			if (j == 0)
				c.push_back(v[i][j]);

			if (v[i][j] != c[c.size()-1])
				c.push_back(v[i][j]);
		}

		int temp = c.size();

		sort(c.begin(), c.end());
		c.erase(unique(c.begin(), c.end()), c.end());

		if (temp == c.size())
		{
			cnt++;
		}

		c.clear();
	}

	cout << cnt;
}