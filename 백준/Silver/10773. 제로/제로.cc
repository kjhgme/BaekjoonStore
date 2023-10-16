#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int k{};
	int sum{}, temp{};
	stack<int> s;

	cin >> k;
	for (int i = 0; i < k; ++i)
	{
		cin >> temp;
		if (temp == 0)
			s.pop();
		else
			s.push(temp);
	}

	while (!s.empty())
	{
		sum += s.top();
		s.pop();
	}

	cout << sum;
}