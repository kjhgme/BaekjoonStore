#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double factorial(int n)
{
	if (n <= 1) return 1;

	return n * factorial(n - 1);
}

double exponential(int n)
{
	double ans = 1;

	if (n == 0) return 0;
	else
	{
		for (int i = 1; i <= n; i++)
		{
			ans += double(1 / factorial(i));
		}
		return ans;
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
     
    cout << "n e\n";
    cout << "- -----------\n";
	cout << "0 1\n";

    for (int i = 1; i < 10; ++i)
    {
		if(i > 2)
	        cout << i << " " << fixed << setprecision(9) << exponential(i) << "\n";
		else
			cout << i << " " << exponential(i) << "\n";
	}
}