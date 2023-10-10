#include <iostream>
using namespace std;

int main()
{
	int n{}, m{};
	int arr[10001] {0,};

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &m);
		arr[m] += 1;
	}


	for (int i = 1; i < 10001; ++i)
	{
		for (int j = 1; j <= arr[i]; ++j)
			printf("%d\n", i);
	}
}

