#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n{};
	int cnt{};
	vector<int> v;

	while (n != -1)
	{
		cin >> n;
		cnt = 1;

		if (n == -1)
		{
			return 0;
		}
		
		for (int i = 2; i <= (n / 2); ++i)
		{
			if (n % i == 0)
			{
				cnt = cnt + i;
				v.push_back(i);
			}
		}

		if (cnt == n)
		{
			cout << n << " = 1";
			for (int i = 0; i < v.size(); ++i)
				cout << " + " << v[i];
			cout << endl;
		}
		else {
			cout << n << " is NOT perfect.\n";
		}

		v.clear();
	}
}

