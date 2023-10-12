#include <iostream>
using namespace std;

int main()
{
	int t{};
	int k{}, n{};
	int arr[15][14]{0,};

	for (int i = 0; i < 15; ++i) {
		for (int j = 0; j < 14; ++j) {
			if(i == 0)
				arr[i][j] += j + 1;
			if (i != 0)
			{
				if (j == 0)
					arr[i][j] += 1;
				else{
					arr[i][j] += arr[i - 1][j] + arr[i][j - 1];
				}
			}
		}
	}

	/*for (int i = 0; i < 15; ++i) {
		for (int j = 0; j < 14; ++j) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}*/

	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		cin >> k;
		cin >> n;

		cout << arr[k][n-1] << endl;
	}
}