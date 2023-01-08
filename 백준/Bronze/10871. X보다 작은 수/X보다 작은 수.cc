#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	int x;
	cin >> n >> x;

	vector<int> v;

	int a;
	for (int i = 0; i < n; ++i)
	{
		cin >> a;
		if (a < x)
			v.push_back(a);
	}

	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
}