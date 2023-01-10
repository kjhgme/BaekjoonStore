#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t{};
	cin >> t;

	int n{};
	int sum{};
	vector<int> v;
	for (int i = 0; i < t; ++i)
	{
		cin >> n;

		for (int j = 0; j < n; ++j)
		{
			int x{};
			cin >> x;
			sum += x;
		}
		v.push_back(sum);
		sum = 0;
	}

	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << endl;
}