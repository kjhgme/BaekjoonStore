#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string line;
	while (getline(cin, line))
	{
		vector<int> v;
		int n;
	
		std::istringstream iss(line);

		while (iss >> n) {
			v.push_back(n);
		}

		for (size_t j = 0; j < v.size(); ++j)
		{
			if (v.size() == 1)
			{
				cout << v[0];
			}
			else if (j == 0)
				cout << v[0] * v[1] << " ";
			else if (j == v.size() - 1)
				cout << v[j - 1] * v[j] << " ";
			else
				cout << v[j - 1] * v[j] * v[j + 1] << " ";
		}

		cout << "\n";

		v.clear();
	}
}