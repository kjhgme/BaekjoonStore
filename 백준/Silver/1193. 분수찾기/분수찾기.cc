#include <iostream>

using namespace std;

int main()
{
	int x{};
	int n{ 0 };
	int cnt{ 1 };

	cin >> x;

	if (x == 1)
	{
		cout << "1/1";

		return 0;
	}

	while (x > n)
	{
		n = n + cnt;

		cnt++;
	}
	cnt--;
	n = n - cnt;
	x = x - n - 1;

	if (cnt % 2 == 0)
	{
		cout << 1 + x << "/" << cnt - x << endl;
	}
	else {
		cout << cnt - x << "/" << 1 + x << endl;
	}
}