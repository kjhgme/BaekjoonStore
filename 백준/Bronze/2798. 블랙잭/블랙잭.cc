#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n{}, m{};
	int num{};
	vector<int> v;

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		cin >> num;
		v.push_back(num);
	}

	int temp{};
	for (int i = 0; i < n - 2; ++i) {
		for (int j = i + 1; j < n - 1; ++j) {
			for (int k = j + 1; k < n; ++k) {
				if (v[i] + v[j] + v[k] <= m)
				{
					if (v[i] + v[j] + v[k] > temp)
						temp = v[i] + v[j] + v[k];
				}
			}
		}
	}

	cout << temp;
}