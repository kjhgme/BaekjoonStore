#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int bigger(int x, int y)
{
	return x > y;
}

int main()
{
	int n;
	vector<int> v;
	cin >> n;

	while (n > 0)
	{
		int x = n % 10;

		v.push_back(x);

		n /= 10;
	}

	sort(v.begin(), v.end(), bigger);

	for (int i = 0; i < v.size(); ++i)
		cout << v[i];
}