#include <iostream>
using namespace std;

int main()
{
	int x{}, y{}, w{}, h{};
	int min{ 1000 };

	cin >> x >> y >> w >> h;

	w -= x;
	h -= y;

	if (x < min)
		min = x;
	if (y < min)
		min = y;
	if (w < min)
		min = w;
	if (h < min)
		min = h;

	cout << min;
}

