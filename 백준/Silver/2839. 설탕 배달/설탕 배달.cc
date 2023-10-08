#include <iostream>
using namespace std;

int main()
{
	int n{};
	int temp{};
	int s5{}, s3{};

	cin >> n;

	s5 = n / 5;
	n = n % 5;
	temp = n;

	for (int i = 0; i <= s5; ++i)
	{
		while (n > 0)
		{
			n -= 3;
			s3++;
		}

		if (n == 0)
		{
			cout << (s3 + s5 - i);
			return 0;
		}
		else if (n < 0)
		{
			s3 = 0;
			n = temp + 5;
			temp = n;
		}
	}

	cout << -1;
}

