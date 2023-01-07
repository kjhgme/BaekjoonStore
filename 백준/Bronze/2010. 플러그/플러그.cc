#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int sum{};

	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		sum += x;
		sum -= 1;
	}
	sum += 1;
	cout << sum;
}