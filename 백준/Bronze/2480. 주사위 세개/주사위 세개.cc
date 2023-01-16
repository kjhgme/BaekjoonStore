#include <iostream>

using namespace std;

int main()
{
	int x{}, y{}, z{};
	int max{};
	cin >> x >> y >> z;

	if (x >= y && x >= z)
		max = x;
	else if (y >= x && y >= z)
		max = y;
	else
		max = z;

	if (x == y && x == z)
	{
		cout << 10000 + x * 1000;
	}
	else if (x == y || x == z || y == z)
	{
		if (x == y || x == z)
			cout << 1000 + x * 100;
		else
			cout << 1000 + z * 100;
	}
	else
		cout << max * 100;
}