#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 2*n; ++j)
		{
			if (i >= j)
				cout << "*";
			else if ((2*n) - 1 <= i + j)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}

	for (int i = n-1; i > 0; --i)
	{
		for (int j = 2 * n; j > 0; --j)
		{
			if (i >= j)
				cout << "*";
			else if ((2 * n) < i + j)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}