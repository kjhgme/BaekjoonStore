#include <iostream>
#include <math.h>

using namespace std;


unsigned long long fac(int n)
{
	if (n == 0)
		return 1;

	return n * fac(n - 1);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	cout << fac(n);
}