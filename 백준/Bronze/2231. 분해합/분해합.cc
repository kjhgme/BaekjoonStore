#include <iostream>
using namespace std;

int main()
{
	int n{}, m{};
	int temp{};

	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		temp = i;
		m = i;
		
		while (m > 0)
		{
			temp += m % 10;
			m = m / 10;
		}

		if (temp == n)
		{
			cout << i;
			return 0;
		}
		temp = 0;
	}

	cout << 0;
}