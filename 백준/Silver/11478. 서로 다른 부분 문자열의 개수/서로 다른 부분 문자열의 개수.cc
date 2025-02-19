#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
	string s;
	set<string> SS;

	cin >> s;

	for (size_t i = 0; i < s.size(); ++i)
	{
		for (size_t j = 1; j <= s.size(); ++j)
		{
			string add = s.substr(i, j);

			SS.insert(add);
		}
	}

	cout << SS.size();
}
