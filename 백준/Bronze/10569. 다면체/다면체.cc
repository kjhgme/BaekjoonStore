#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int v{}, e{};
	vector <int> x;

	for (int i = 0; i < n; ++i)
	{
		cin >> v >> e;

		x.push_back(2 - v + e);
	}

	for (int i = 0; i < n; ++i)
	{
		cout << x[i] << endl;
	}
}