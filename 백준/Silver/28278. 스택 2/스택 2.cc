#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);

	int x;
	cin >> x;

	stack<int> s;

	for (int i = 0; i < x; ++i)
	{
		int a;
		cin >> a;

		if (a == 1)
		{
			int b;
			cin >> b;

			s.push(b);
		}
		else if (a == 2)
		{
			if (s.empty())
				cout << -1 << "\n";
			else {
				int b = s.top();
				s.pop();
				cout << b << "\n";
			}
		}
		else if (a == 3)
		{
			cout << s.size() << "\n";
		}
		else if (a == 4)
		{
			if (s.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (a == 5)
		{
			if (s.empty())
				cout << -1 << "\n";
			else {
				int b = s.top();
				cout << b << "\n";
			}
		}
	}
}
