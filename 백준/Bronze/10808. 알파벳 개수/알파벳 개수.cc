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

	for (char i = 'a'; i <= 'z'; ++i)
	{
		int cnt = 0;
		for (auto c : s)
		{
			if (c == i)
				cnt++;
		}

		cout << cnt << " ";
	}
}