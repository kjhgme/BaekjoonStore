#include <iostream>
using namespace std;

int main()
{
	int n{};
	int box{};
	int mul{};
	int path{1};

	cin >> n;

	if (n == 1)
		cout << path;
	else {
		while (n > (6 * mul) + 1)
		{
			box++;
			mul += box;
			path++;
		}

		cout << path;
	}
}

// 1		1				1
// 2~7		1+1				6 * 1 + 1
// 8~19		6*1 +2			6 * 3 + 1
// 20~37	6*3+2			6 * 6 + 1
// 38~61	6*6+2			6 * 10 +1
