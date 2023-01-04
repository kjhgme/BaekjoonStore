#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int n;
	cin >> n;
	int m;

	for (int i = 0; i < 9; ++i)
	{
		cin >> m;
		n -= m;
	}

	cout << n;
}