#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int x{};
	int cnt{};
	int sum{};
	for (int i = 0; i < n; ++i)
	{
		cin >> x;

		if (x == 1) {
			cnt++;
			sum += cnt;
		}
		else
			cnt = 0;
	}

	cout << sum;
}