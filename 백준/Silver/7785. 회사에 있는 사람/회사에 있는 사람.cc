#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	int n;

	map<string, string, greater<string>> m;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		string x;
		string y;
		cin >> x >> y;

		if (y == "leave")
		{
			m.erase(x);
			continue;
		}

		m.insert({ x, y });
	}

	for (auto iter : m)
	{
		cout << iter.first << "\n";
	}
}
