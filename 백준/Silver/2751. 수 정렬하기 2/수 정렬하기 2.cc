#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n{};
	int num{};
	vector<int> v;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> num;
		v.push_back(num);
	}

	
	sort(v.begin(), v.end());

	v.erase(unique(v.begin(), v.end()), v.end());

	for (int i = 0; i < v.size(); ++i)
	{
		printf("%d\n", v[i]);
	}
}

