#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n{};
	string s{};
	vector<int> v;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> s;

		if (s == "push")
		{
			int num{};
			cin >> num;
			v.push_back(num);
		}
		else if (s == "pop")
		{
			if (v.size() == 0)
				cout << -1 << endl;
			else {
				cout << v[v.size() - 1] << endl;
				v.pop_back();
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
		else if (s == "top")
		{
			if (v.size() == 0)
				cout << -1 << endl;
			else {
				cout << v[v.size()-1] << endl;
			}
		}
	}
}