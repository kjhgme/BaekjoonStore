#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = -1;


	while (true)
	{
		cin >> n;

		if (n == 0) return 0;

		int sum = 0;

		for (int i = 1; i <= n; i++)
		{
			sum += i;
		}

		cout << sum << endl;
	}
}