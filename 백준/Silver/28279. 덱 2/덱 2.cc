#include <iostream>
#include <deque>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);

	deque<int> d;
	int n;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int x;

		cin >> x;

		if (x == 1)	{
			int a;
			cin >> a;
			d.push_front(a);
		}
		else if (x == 2) {
			int a;
			cin >> a;
			d.push_back(a);
		}
		else if (x == 3) {
			if (d.empty())
				cout << -1 << "\n";
			else {
				cout << d.front() << "\n";
				d.pop_front();
			}
		}
		else if (x == 4) {
			if (d.empty())
				cout << -1 << "\n";
			else {
				cout << d.back() << "\n";
				d.pop_back();
			}
		}
		else if (x == 5) {
			cout << d.size() << "\n";
		}
		else if (x == 6) {
			if (d.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (x == 7) {
			if (d.empty())
				cout << -1 << "\n";
			else {
				cout << d.front() << "\n";
			}
		}
		else if (x == 8) {
			if (d.empty())
				cout << -1 << "\n";
			else {
				cout << d.back() << "\n";
			}
		}
	}
}
