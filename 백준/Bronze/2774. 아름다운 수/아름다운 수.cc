#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		char n[11];
		cin >> n;

		int x = 0;
		map<char, int> m;
		while (n[x] != NULL && x <= 10)
		{
			m.emplace(n[x], 0);
			x++;
		}

		cout << m.size() << "\n";

		m.clear();
	}
} 