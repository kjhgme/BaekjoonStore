#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{  
	int n, p;

	cin >> n >> p;

	int temp = n;
	int c = 0;

	vector<int> v;

	while (true)
	{		
		auto iter = find(v.begin(), v.end(), temp);

		if (iter == v.end())
			v.push_back(temp);
		else
		{
			c = iter - v.begin();
			break;
		}

		temp = temp * n % p;
	}

	cout << v.size() - c;
}