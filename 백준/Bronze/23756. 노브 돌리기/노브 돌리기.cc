#include <iostream>
#include <math.h>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int a;
	int x;
	int sum = 0;
	
	cin >> n;
	cin >> a;

	for (int i = 0; i < n; ++i)
	{
		cin >> x;

		if (a <= x)
		{
			int L = (360 - x) + a;
			int R = x - a;

			if (L > R)
				sum += R;
			else
				sum += L;
		}
		else {
			int L = a - x;
			int R = (360 - a) + x;

			if (L > R)
				sum += R;
			else
				sum += L;
		}

		a = x;
	}

	cout << sum;
}