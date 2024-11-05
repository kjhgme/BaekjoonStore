#include <iostream>
using namespace std;

int main()
{
	int x{-1}, y{-1}, z{-1};


	while (true)
	{
		cin >> x >> y >> z;

		if (x == 0 && y == 0 && z == 0)
			return 0;

		if (x >= y && x >= z && x < y + z)
		{
			if (x == y && x == z)
				cout << "Equilateral\n";
			else if (x == y || x == z || y == z)
				cout << "Isosceles\n";
			else if (x != y && x != z)
				cout << "Scalene\n";
		}
		else if (y >= z && y >= x && y < x + z)
		{
			if (x == y && x == z)
				cout << "Equilateral\n";
			else if (x == y || x == z || y == z)
				cout << "Isosceles\n";
			else if (x != y && x != z)
				cout << "Scalene\n";

		}
		else if (z >= y && z >= x && z < y + x)
		{
			if (x == y && x == z)
				cout << "Equilateral\n";
			else if (x == y || x == z || y == z)
				cout << "Isosceles\n";
			else if (x != y && x != z)
				cout << "Scalene\n";
		}
		else
			cout << "Invalid\n";
	}
}

