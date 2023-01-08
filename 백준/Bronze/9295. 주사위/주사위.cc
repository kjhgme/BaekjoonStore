#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> sum;

	int x{}, y{};
	for (int i = 0; i < n; ++i)
	{
		cin >> x >> y;

		sum.push_back(x + y);
	}

	for (int i = 0; i < n; ++i)
	{
		cout << "Case " << i + 1 << ": " << sum[i] << endl;
	}
}