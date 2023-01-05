#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int sum{};
	vector<int> v;

	for (int i = 0; i < t; ++i) 
	{
		int s;
		cin >> s;

		int n;
		cin >> n;

		for (int j = 0; j < n; ++j)
		{
			int q, p;
			cin >> q >> p;
			sum += q * p;
		}
		v.push_back(s + sum);
		sum = 0;
	}

	for (int i = 0; i < t; ++i)
		cout << v[i] << endl;
}