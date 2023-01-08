#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int cnt{};
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 2 * n - 1; ++j)
		{
			if (i + j == n - 1) {
				cout << "*";
				while (cnt != i)
				{
					cout << " *";
					cnt++;
				}
				break;
			}
			else
				cout << " ";\
		}
		cnt = 0;
		cout << endl;
	}

}