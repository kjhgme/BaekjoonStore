#include <iostream>
using namespace std;

int main()
{
	int x{};
	int sum{};

	for (int i = 0; i < 5; ++i)
	{
		cin >> x;
		sum += x * x;
	}
	cout << sum % 10;
}