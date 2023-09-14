#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
	return a > b;
}

int main()
{
	string s;
	vector<int> v;
	vector<int> vs;

	getline(cin, s);
	
	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == ' ');
		else {
			v.push_back(s[i]);
		}
	}
	
	vs = v;

	sort(vs.begin(), vs.end());
	
	if (v == vs) {
		cout << "ascending";
	}
	else {
		sort(vs.begin(), vs.end(), compare);

		if (v == vs) {
			cout << "descending";
		}
		else {
			cout << "mixed";
		}
	}
}