#include <iostream>
using namespace std;

int main()
{
	int x{1}, y{1}, z{1};
	int temp{};

	while (true)
	{

		cin >> x >> y >> z;
		if (x == 0 && y == 0 && z == 0)
			break;

		if (y > x)
		{
			temp = x;
			x = y;
			y = temp;
		}

		if (z > y)
		{
			temp = y;
			y = z;
			z = temp;
		}

		if (y > x)
		{
			temp = x;
			x = y;
			y = temp;
		}


		if (x * x == y * y + z * z)
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}
}