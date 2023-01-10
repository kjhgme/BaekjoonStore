#include <iostream>
using namespace std;

int main()
{
	int x{};
	int max{};
	int n{};

	for (int i = 0; i < 9; ++i)
	{
		cin >> x;
		if (x > max) {
			max = x;
			n = i+1;
		}
	}

	cout << max << endl;
	cout << n;
}