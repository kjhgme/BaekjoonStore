#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int count{};
	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			count++;
		}
	}

	cout << n * count;
}