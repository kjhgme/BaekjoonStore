#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main()
{
	int t;
	cin >> t;

	int n;
	int c;
	float g;

	int Csum{};
	float Gsum{};

	vector<pair<int, float>> v;

	for (int i = 0; i < t; ++i)
	{
		cin >> n;
		for (int j = 0; j < n; ++j)
		{
			cin >> c >> g;
			Csum += c;
			Gsum += (c*g);
		}
		Gsum = round(10 * Gsum / Csum) / 10;

		v.push_back(make_pair(Csum, Gsum));

		Csum = 0;
		Gsum = 0.0;
	}

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i].first << " " << v[i].second << endl;
	}
}