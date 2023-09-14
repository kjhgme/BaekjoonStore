#include <iostream>
using namespace std;

int main()
{
	int t{};
	int cnt{};
	int score{};
	string s;

	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		cin >> s;

		for (int j = 0; j < s.size(); ++j)
		{
			if (s[j] == 'O')
			{
				cnt++;
				score += cnt;
			}
			else
				cnt = 0;
		}

		cout << score << endl;

		s.clear();
		score = 0;
		cnt = 0;
	}
}