#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n{};
	int sum{};
	vector<int> v(100);
	int max{};
	int maxnum{};
	for (int i = 0; i < 10; ++i)
	{
		cin >> n;
		sum += n;

		v[n / 10]++;
	}

	for (int i = 0; i < v.size(); ++i)
	{
		if (v[i] > max) {
			max = v[i];
			maxnum = i * 10;
		}
	}
	

	cout << sum / 10 << endl;
	cout << maxnum;
}