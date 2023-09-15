#include <iostream>
using namespace std;

int a(int a, int b)
{
	return (a + b) * (a - b);
}

int main()
{
	int n{}, m{};

	cin >> n >> m;

	cout << a(n, m);
}