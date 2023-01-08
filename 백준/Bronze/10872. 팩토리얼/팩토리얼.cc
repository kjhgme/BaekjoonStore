#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int sp{1};

	for (int i = n; i >= 1; --i)
		sp *= i;

	cout << sp << endl;
}