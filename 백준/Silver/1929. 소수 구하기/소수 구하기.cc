#include <iostream>
using namespace std;

bool v[1000001]{ };

int main()
{
	int m{}, n{};

	cin >> m >> n;
	if (n < m) return 0;

	v[0] = true;
	v[1] = true;

	for (int i = 2; i * i <= n; ++i) {
		if (v[i] == true) continue;


		for (int j = i * i; j <= n; j += i)
		{
			v[j] = true;
		}

	}

	for (int i = m; i <= n; ++i) {
		if (!v[i])
			printf("%d\n", i);
	}
}
