#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int x{};
	int cnt{};
	int prime_num{};

	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		cnt = 0;
		if (x == 1)
			prime_num--;
		
		for (int j = 2; j < x; ++j)
		{
			if (x % j == 0)
				cnt++;
		}

		if (cnt == 0)
			prime_num++;
	}

	cout << prime_num;
}