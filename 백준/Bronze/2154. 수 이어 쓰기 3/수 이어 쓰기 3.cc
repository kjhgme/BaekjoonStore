#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string n;
	cin >> n;

	string num = "";
	int pos = 0;

	for (int i = 1; i <= 100'000; ++i)
	{
		string s = to_string(i);
		num += s;

		if (num.size() > n.size() * 2)
		{
			int eraseLen = num.size() - n.size() * 2; 
			pos += eraseLen;
			num.erase(0, eraseLen);
		}

		int ans = num.find(n);
		if (ans != string::npos)
		{
			cout << pos + ans + 1;
			break;
		}
	}
}