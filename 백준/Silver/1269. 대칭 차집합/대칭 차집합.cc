#include <iostream>
#include <set>

using namespace std;

int main()
{
	int a, b;
	set<int> s1;

	cin >> a >> b;

	for (int i = 0; i < a; ++i)
	{
		int x;
		cin >> x;
		s1.insert(x);
	}

	set<int>::iterator iter;

	for (int i = 0; i < b; ++i)
	{
		int x;
		cin >> x;

		iter = s1.find(x);
		if (iter != s1.end())
		{
			s1.erase(x);
			continue;
		}
		s1.insert(x);
	}

	cout << s1.size();
}
