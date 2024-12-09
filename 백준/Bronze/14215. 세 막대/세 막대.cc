#include <iostream>
using namespace std;

int main()
{
	int a{}, b{}, c{};
	int small{};
	int mid{};
	int big{};

	cin >> a >> b >> c;

	if (a >= b && a >= c)
	{
		big = a;

		if (b >= c)
		{
			mid = b;
			small = c;
		}
		else {
			mid = c;
			small = b;
		}
	}
	else if (b >= a && b >= c)
	{
		big = b;

		if (a >= c)
		{
			mid = a;
			small = c;
		}
		else {
			mid = c;
			small = a;
		}
	}
	else
	{
		big = c;

		if (b >= a)
		{
			mid = b;
			small = a;
		}
		else {
			mid = a;
			small = b;
		}
	}

	if (small + mid <= big)
	{
		cout << (small + mid) * 2 - 1;
	}
	else if (small == mid && mid == big) {
		cout << 3 * small;
	}
	else {
		cout << small + mid + big;
	}
}

