#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	string s{};
	int n{};
	int cnt{};
	int sum{};

	cin >> s >> n;

	for (int i = s.length() - 1; i >= 0; i--)
	{
		if ('0' <= s[i] && s[i] <= '9')
		{
			sum += ( s[i] - '0' ) * pow(n, cnt);
		}
		else if ('A' <= s[i] && s[i] <= 'Z')
		{
			sum += (s[i] - 'A' + 10) * pow(n, cnt);
		}
		cnt++;
	}

	cout << sum;
}