#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n{}, m{};
	cin >> n >> m;

	vector<int> v;
	int x;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> x;
			v.push_back(x);
		}
	}

	int cnt{};
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> x;
			v[cnt] += x;
			cnt++;
		}
	}

	cnt = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cout << v[cnt] << " ";
			cnt++;
		}
		cout << endl;
	}
	
}