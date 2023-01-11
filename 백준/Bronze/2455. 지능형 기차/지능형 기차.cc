#include <iostream>

using namespace std;

int main()
{
	int n{}, m{};
	int sum{};
	int best{};
	for (int i = 0; i < 4; ++i)
	{
		cin >> n >> m;
		sum -= n;
		sum += m;
		if (sum > best)
			best = sum;
	}

	cout << best;
}