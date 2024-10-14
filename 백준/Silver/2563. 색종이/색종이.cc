#include <iostream>
using namespace std;

int main()
{
	int n{};
	int x{}, y{};
	int cnt{};
	char arr[100][100]{ '0', };

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> x >> y;

		for (int k = x; k < x + 10; ++k) {
			for (int j = y; j < y + 10; ++j) {
				arr[k][j] = '1';
			}
		}
	}
		

	for (int i = 0; i < 100; ++i) {
		for (int j = 0; j < 100; ++j) {
			if (arr[i][j] == '1')
				cnt++;
		}
	}

	cout << cnt;
}