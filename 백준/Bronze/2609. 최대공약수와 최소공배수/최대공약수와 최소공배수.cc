#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	int mod = a % b;

	while (mod > 0)
	{
		a = b;
		b = mod;
		mod = a % b;
	}

	return b;
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int main()
{
	int n, m;
	cin >> n >> m;

	cout << gcd(n, m) << endl;
	cout << lcm(n, m);
}