#include <iostream>
using namespace std;

int main()
{
	int a{}, b{}, v{};
	int day{};

	cin >> a >> b >> v;
	
	day = (v - a) / (a - b);

	if ((v - a) % (a - b) != 0)
		day++;
	if (a >= v)
		cout << "1";
	else 
		cout << day + 1;
}