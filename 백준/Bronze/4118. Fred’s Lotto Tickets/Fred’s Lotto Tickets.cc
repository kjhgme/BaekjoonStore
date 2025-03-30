#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	set<int> s;
	int n = -1;

	while (n != 0)
	{
		cin >> n;
		if (n == 0)
			break;

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < 6; ++j)
			{
				int x;
				cin >> x;
				s.insert(x);
			}
		}

		if (s.size() == 49)
		{
			cout << "Yes\n";
		}
		else
		{
			cout << "No\n";
		}
	
		s.clear();
	}
}