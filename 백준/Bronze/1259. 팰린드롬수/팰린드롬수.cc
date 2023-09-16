#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;

	while (true)
	{
		re:

		cin >> s;

		if (s == "0")
			break;

		for (int i = 0; i < (s.size() / 2); ++i)
		{
			if(s[i] != s[s.size() - i - 1]) {
				cout << "no" << endl;
				goto re;
			}
		}

		cout << "yes" << endl;
	}
}