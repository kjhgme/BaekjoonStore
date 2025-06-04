#include <iostream>
#include <string>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cnt = 0;
	int x, y;
	int n;

	cin >> x >> y >> n;
	
	for (int i = x; i <= y; ++i)
	{
		string num = to_string(i);

		for (char c : num)
		{
			if (c - '0' == n)
				cnt++;
		}
	}

	cout << cnt;
}