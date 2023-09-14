#include <iostream>
using namespace std;

int main()
{
	int t{};
	int H{}, W{}, N{};
	int floor{};
	int cnt{ 1 };

	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		cin >> H >> W >> N;
		floor = N;

		while ((floor - H) > 0)
		{
			floor -= H;
			cnt++;
		}

		printf("%d%02d\n", floor, cnt);

		floor = 0;
		cnt = 1;
	}

}