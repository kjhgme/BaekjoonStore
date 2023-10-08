#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int n{};
	int num{};
	vector<int> v;

	cin >> n;
	if (n == 0)
	{
		cout << 0 << endl;
		return 0;
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> num;
		v.push_back(num);
	}

	double except = v.size() * 0.15;
	except = round(except);

	double sum{};

	sort(v.begin(), v.end());

	for (int i = 0 + except; i < n - except; ++i)
	{
		sum += v[i];
	}

	sum = sum / (v.size() - (except * 2));
	sum = round(sum);

	cout << sum;

}
