#include <iostream>
using namespace std;

int main()
{
	int x{}, y{};
	int x2{}, y2{}, x3{}, y3{};

	cin >> x >> y >> x2 >> y2 >> x3 >> y3;

	if (x == x2)
		cout << x3;
	else if (x == x3)
		cout << x2;
	else
		cout << x;

	cout << " ";

	if (y == y2)
		cout << y3;
	else if (y == y3)
		cout << y2;
	else
		cout << y;
}

