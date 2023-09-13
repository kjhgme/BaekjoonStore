#include <iostream>
using namespace std;

int main()
{
	int n{};
	int sum{};
	string num{};

	cin >> n;
	cin >> num;
	for (int i = 0; i < n; ++i)
	{
		sum += num[i] - '0';
	}

	cout << sum;
}