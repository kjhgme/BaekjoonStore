#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> nv;
vector<int> mv;
void bSearch(int n, int start, int end);

int main()
{
	int n{};

	int m{};

	int num{};

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &num);
		nv.push_back(num);
	}

	cin >> m;

	for (int i = 0; i < m; ++i)
	{
		scanf("%d", &num);
		mv.push_back(num);
	}

	sort(nv.begin(), nv.end());

	
	for (int i = 0; i < mv.size(); ++i)
	{
		int start = 0;
		int end = nv.size() - 1;
		bSearch(mv[i], start, end);
	}
}


void bSearch(int n, int start, int end)
{
	int middle = (start + end) / 2;

	if (start > end)
	{
		printf("0\n");

		return;
	}
	else if (nv[middle] == n)
	{
		printf("1\n");

		return;
	}
	else if (nv[middle] < n)
	{
		start = middle + 1;
		bSearch(n, start, end);
	}
	else if (nv[middle] > n)
	{
		end = middle - 1;
		bSearch(n, start, end);
	}
}