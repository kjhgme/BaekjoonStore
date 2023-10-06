#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int t{};
	int n{}, m{};
	int x{};
	

	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		queue<pair<int, int>> q;
		priority_queue<int> pq;
		int cnt{1};

		cin >> n >> m;

		for (int j = 0; j < n; ++j)
		{
			cin >> x;
			q.push(make_pair(x, j));
			pq.push(x);
		}

		while (!q.empty())
		{
			if (pq.top() == q.front().first)
			{
				if (q.front().second == m)
				{
					cout << cnt << endl;
					break;
				}
				pq.pop();
				q.pop();

				cnt++;

			}
			else {
				q.push(make_pair(q.front().first, q.front().second));
				q.pop();
			}
		}
	}
}
