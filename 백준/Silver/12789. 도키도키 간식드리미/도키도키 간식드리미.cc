#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<int> q;
	stack<int> s;
	int x;
	cin >> x;

	for (int i = 0; i < x; ++i)
	{
		int a;

		cin >> a;

		q.push(a);
	}

	int cnt = 1;

	while (!q.empty())
	{
		if (cnt == q.front())
		{
			q.pop();
			cnt++;
		}
		else if (!s.empty() && cnt == s.top())
		{
			s.pop();
			cnt++;
		}
		else {
			s.push(q.front());
			q.pop();
		}
	}

	while (!s.empty() && cnt == s.top())
	{
		s.pop();
		cnt++;
	}


	if (q.empty() && s.empty())
	{
		cout << "Nice";
	}
	else
		cout << "Sad";

}
