#include <iostream>

using namespace std;

int main()
{
	int x{};
	int num{ 2 };

	cin >> x;
	
	while (x >= 1)
	{
		num += num - 1;
		
		x--;
	}

	cout << num * num;
}