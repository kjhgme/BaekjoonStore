#include <iostream>
using namespace std;

int main()
{
	int n{};
	int x{}, y{};
	int minx{ 100001 }, maxx{ -10001 }, miny{ 100001 }, maxy{ -10001 };

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> x >> y;

		if (x < minx)
			minx = x;
		if (x > maxx)
			maxx = x;

		if (y < miny)
			miny = y;
		if (y > maxy)
			maxy = y;
	}

	if (n == 1)
		cout << 0;
	else
		cout << (maxx - minx) * (maxy - miny);
}

