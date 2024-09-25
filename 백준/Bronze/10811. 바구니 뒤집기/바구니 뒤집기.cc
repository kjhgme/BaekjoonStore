#include <iostream>
using namespace std;

int main()
{
	int n, m{};

	int a[100]{};

	cin >> n >> m;

	for (int i = 0; i < n; ++i) {
		a[i] = i + 1;
	}

	for (int i = 0; i < m; ++i)
	{
		int x, y{};

		cin >> x >> y;

		x--;
		y--;
		int num = x;

		for (int j = 0; j <= (y - x) / 2; ++j)
		{
			int temp = a[num];
			a[num] = a[y - j];
			a[y - j] = temp;
			num++;
		}
	}

	for (int i = 0; i < n; ++i) {
		cout << a[i] << " ";
	}
}