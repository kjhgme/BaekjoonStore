#include <iostream>

using namespace std;

int main()
{
	int n{};
	int sum{};
	int l{100};

	for (int i = 0; i < 7; ++i)
	{
		cin >> n;
		if (n % 2 == 1) {
			sum += n;
			if (l > n)
				l = n;
		}
	}

	if (sum == 0)
		cout << -1;
	else
		cout << sum << endl << l;
}