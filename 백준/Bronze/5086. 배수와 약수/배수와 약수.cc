#include <iostream>

using namespace std;

int main()
{
	int x{-1}, y{-1};

	while (true)
	{
		cin >> x >> y;

		if (x != 0 && y != 0)
		{
			if (y % x == 0) {
				cout << "factor" << endl;
			}
			else if (x % y == 0) {
				cout << "multiple" << endl;
			}
			else {
				cout << "neither" << endl;
			}
		}
		else{
			break;
		}		
	}
}