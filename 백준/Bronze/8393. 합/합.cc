#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int sum{};
	for (int i = 0; i < n; ++i)
	{
		sum += i + 1;
	}
	cout << sum;
}