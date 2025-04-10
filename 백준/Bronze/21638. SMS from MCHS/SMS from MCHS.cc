#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b;
	int x, y;
	cin >> a >> b;
	cin >> x >> y;

	if (x < 0 && y >= 10)
	{
		cout << "A storm warning for tomorrow! Be careful and stay home if possible!";
	}
	else if (a > x)
	{
		cout << "MCHS warns! Low temperature is expected tomorrow.";
	}
	else if (y > b)
	{
		cout << "MCHS warns! Strong wind is expected tomorrow.";
	}
	else {
		cout << "No message";
	}
}
