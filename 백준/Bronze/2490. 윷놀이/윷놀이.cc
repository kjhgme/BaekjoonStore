#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int cnt{};
	vector<char> v;

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			int n;
			cin >> n;

			if (n == 0)
				cnt++;
		}
		if (cnt == 0)
			v.push_back('E');
		else if (cnt == 1)
			v.push_back('A');
		else if (cnt == 2)
			v.push_back('B');
		else if (cnt == 3)
			v.push_back('C');
		else if (cnt == 4)
			v.push_back('D');
		
		cnt = 0;
	}

	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << endl;
}