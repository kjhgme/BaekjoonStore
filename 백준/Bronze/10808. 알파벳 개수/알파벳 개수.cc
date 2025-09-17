#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void) {
	string s;
	cin >> s;

	vector<pair<char, int>> v;


	for (char i = 'a'; i <= 'z'; ++i)
	{
		v.push_back(make_pair(i, 0));
	}

	for (auto c : s)
	{
		for (int i = 0; i < v.size(); ++i)
		{
			if (v[i].first == c)
			{
				v[i].second++;
				break;
			}
		}
	}

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i].second << " ";
	}
}