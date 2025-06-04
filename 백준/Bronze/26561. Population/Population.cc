#include <iostream>

using namespace std;

int cal(int x, int y)
{
	int num = x;

	int birth = y / 4;
	int death = y / 7;

	return num + birth - death;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int x, y;

	cin >> n;
	
	for (int i = 0; i < n; ++i)
	{
		cin >> x >> y;

		cout << cal(x, y) << endl;
	}
}