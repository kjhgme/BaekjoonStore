#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> you;
	vector<int> dad;

	int c{}, v{};
	for (int i = 0; i < n; ++i)
	{
		cin >> c >> v;

		you.push_back(c / v);
		dad.push_back(c % v);
	}

	for (int i = 0; i < n; ++i)
	{
		cout << "You get " << you[i] << " piece(s) and your dad gets " <<
			dad[i] << " piece(s)." << endl;
	}
}