#include <iostream>

using namespace std;

int main()
{
	int h{}, m{};
	int c{};

	cin >> h >> m;
	cin >> c;

	h += (m + c) / 60;
	m = (m + c) % 60;
	if (h >= 24)
		h -= 24;
	cout << h << " " << m;
}