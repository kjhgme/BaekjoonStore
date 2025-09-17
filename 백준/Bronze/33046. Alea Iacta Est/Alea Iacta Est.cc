#include <iostream>
#include <vector>
// #include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void) 
{
	int a, b;
	int c, d;

	cin >> a >> b;
	cin >> c >> d;

	int temp = a + b + c + d - 1;

	temp = temp % 4;

	if (temp == 0)
		temp = 4;

	cout << temp;
}