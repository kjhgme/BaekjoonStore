#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cout << " @@@   @@@  \n";
		cout << "@   @ @   @ \n";
		cout << "@    @    @ \n";
		cout << "@         @ \n";
		cout << " @       @  \n";
		cout << "  @     @   \n";
		cout << "   @   @    \n";
		cout << "    @ @     \n";
		cout << "     @      \n";
	}
}