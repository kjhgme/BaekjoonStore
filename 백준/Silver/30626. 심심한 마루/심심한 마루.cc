#include <iostream>
#include <vector>

using namespace std;

bool dot[360];

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int a, b;
		cin >> a >> b;

		if (b == 180) {
			for (int j = 0; j < 360; ++j) 
				dot[j] = true;
			continue;
		}
		int start = (a + 180 - b + 360) % 360;
		int length = 2 * b;

		for (int j = 0; j <= length; ++j)
		{
			int idx = (start + j) % 360;
			dot[idx] = true;
		}
	}

	int cnt = 0;
	for (int i = 0; i < 360; ++i)
	{
		if (dot[i]) cnt++;
	}

	cout << cnt << "\n";
}