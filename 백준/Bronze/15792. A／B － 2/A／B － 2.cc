#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	cout << a / b << ".";

	a %= b;

	for (int i = 0; i <= 1000; i++) {
		if (a == 0)
			break;
		a *= 10;
		cout << a / b;
		a -= (a / b) * b;
	}
    
	cout << "\n";
}