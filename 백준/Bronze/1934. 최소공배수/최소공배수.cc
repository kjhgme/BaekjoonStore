#include <iostream>
#include <deque>

using namespace std;

int gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}

int lcm(int a, int b)
{
	return (a * b) / gcd(a, b);
}

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int a, b;

		cin >> a >> b;

		cout << lcm(a, b) << "\n";
	}
}
