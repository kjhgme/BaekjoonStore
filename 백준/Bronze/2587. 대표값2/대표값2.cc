#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int sum = 0;
	vector<int> v;

	for (int i = 0; i < 5; ++i)
	{
		int x;
		cin >> x;
		v.push_back(x);
		sum += x;
	}

	sort(v.begin(), v.end());

	cout << sum / 5 << endl;
	cout << v[2] << endl;	
}