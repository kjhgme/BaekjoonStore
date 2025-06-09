#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    vector<int> a(10000), b(10000);
	int x, y;

	for (int i = 0; i < 10'000; ++i)
	{
		a[i] = i + 1;
		b[i] = i + 1;
	}

	random_device rd;
	mt19937 g(rd());

	shuffle(a.begin(), a.end(), g);
	shuffle(b.begin(), b.end(), g);


	for (int i = 0; i < 10'000; ++i)
	{
		cout << "? A " << a[i] << endl;

		int n;
		cin >> n;

		if (n == 1)
		{
			x = a[i];
			break;
		}
	}
	for (int i = 0; i < 10'000; ++i)
	{
		cout << "? B " << b[i] << endl;

		int n;
		cin >> n;

		if (n == 1)
		{
			y = b[i];
			break;
		}
	}

	cout << "! " << x + y;
}