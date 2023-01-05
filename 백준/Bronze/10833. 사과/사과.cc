#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int students, apples;
	int rest{};

	for (int i = 0; i < n; ++i)
	{
		cin >> students >> apples;

		rest += apples % students;
	}
	
	cout << rest;
}