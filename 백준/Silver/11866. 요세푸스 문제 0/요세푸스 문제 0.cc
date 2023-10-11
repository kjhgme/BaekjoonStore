#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n{}, k{};
	vector<int> v;
	vector<int> ans;
	cin >> n >> k;

	for (int i = 1; i <= n; ++i)
	{
		v.push_back(i);
	}

	int pos{-1};

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 0; j < k; ++j)
		{
			pos++;

			if (pos >= v.size())
			{
				pos -= v.size();
			}
		}

		ans.push_back(v[pos]);
		v.erase(v.begin() + pos);
		pos--;

	}

	cout << "<";
	for (int i = 0; i < ans.size()-1; ++i)
	{
		cout << ans[i] << ", ";
	}
	cout << ans[ans.size() - 1] << ">";
}