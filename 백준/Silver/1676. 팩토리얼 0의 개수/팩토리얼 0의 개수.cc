#include <iostream>
using namespace std;


int main()
{
	int n{};
	int cnt{};

	cin >> n;
	
	cnt += n / 5;
	cnt += n / 25;
	cnt += n / 125;

	cout << cnt;
}