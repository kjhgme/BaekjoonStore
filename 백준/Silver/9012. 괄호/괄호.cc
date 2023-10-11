#include <iostream>
#include <vector>
using namespace std;

void isVPS(string s)
{
	int Cnt{};

	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == '(')
			Cnt++;
		else if (s[i] == ')')
			Cnt--;

		if (Cnt < 0)
			break;
	}

	if (Cnt == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

int main()
{
	int n{};
	string s;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> s;

		isVPS(s);
	}
}