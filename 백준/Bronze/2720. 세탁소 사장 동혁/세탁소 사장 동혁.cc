#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	int t{};
	int c{};

	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		cin >> c;

		int q = c / 25;
		int z = c % 25;

		int w = z / 10;
		int x = z % 10;

		int e = x / 5;
		int v = x % 5;

		cout << q << " " << w << " " << e << " " << v << endl;
	}

	

}