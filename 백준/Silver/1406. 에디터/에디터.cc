#include <iostream>
#include <vector>
#include <list>

using namespace std;

list<char> l;

void cmd(char c, list<char>::iterator& cursor, char x = ' ')
{
	if (c == 'L')
	{
		if(cursor != l.begin())
			--cursor;
	}
	else if (c == 'D')
	{
		if(cursor != l.end())
			++cursor;
	}
	else if (c == 'B')
	{
		if (cursor != l.begin())
		{
			auto temp = cursor;
			--temp;
			l.erase(temp);
		}
	}
	else if (c == 'P')
	{
		l.insert(cursor, x);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	for (auto c : s)
	{
		l.push_back(c);
	}

	auto cursor = l.end();

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		char c;
		cin >> c;

		char a;
		if (c == 'P')
		{
			cin >> a;
			cmd(c, cursor, a);
		}
		else
			cmd(c, cursor);
	}

	string result;
	result.reserve(l.size());

	for (auto c : l) {
		result.push_back(c);
	}

	cout << result;
}