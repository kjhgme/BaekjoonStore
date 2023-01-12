#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t{};
	cin >> t;

	int n{};
	string s{};
	string x{};
	vector<string> sv;
	for (int i = 0; i < t; ++i)
	{
		cin >> n >> s;

		for (int j = 0; j < n-1; ++j)
			x += s[j];
		for (int j = n; j < s.length(); ++j)
			x += s[j];
		
		sv.push_back(x);
		x = {};
	}

	for (int i = 0; i < sv.size(); ++i)
		cout << sv[i] << endl;
}