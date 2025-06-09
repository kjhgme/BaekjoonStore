#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<vector<char>> v(n, vector<char>(n));

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {			
			cin >> v[i][j];
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)	{
			if (v[i][j] != v[j][i])
			{
				cout << "NO";
				return 0;
			}
		}
	}

	cout << "YES";
}