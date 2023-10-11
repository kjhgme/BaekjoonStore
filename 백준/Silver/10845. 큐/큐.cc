#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n{};
	int num{};
	string s;
	vector<int> v;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> s;

		if (s == "push")
		{
			cin >> num;
			v.push_back(num);
		}
		else if (s == "pop")
		{
			if (v.size() == 0)
				cout << -1 << endl;
			else {
				cout << v[0] << endl;
				v.erase(v.begin());
			}
		}
		else if (s == "size")
		{
			cout << v.size() << endl;
		}
		else if (s == "empty")
		{
			if (v.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (s == "front")
		{
			if (v.size() == 0)
				cout << -1 << endl;
			else {
				cout << v[0] << endl;
			}

		}
		else if (s == "back")
		{
			if (v.size() == 0)
				cout << -1 << endl;
			else {
				cout << v[v.size() - 1] << endl;
			}
		}
	}
}