#include <iostream>

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
		int n;
		int a, b, c;
		int sum = 0;

		cin >> n;

		for (int j = 0; j < n; ++j)
		{
			cin >> a >> b >> c;

			if (a <= 0 && b <= 0 && c <= 0)
				sum += 0;
			else if (a >= b && a >= c)
				sum += a;
			else if (b >= a && b >= c)
				sum += b;
			else if(c >= a && c >= b)
				sum += c;
		}
		cout << sum << "\n";
	}
}
