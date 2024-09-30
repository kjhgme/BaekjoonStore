#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	string s{};
	bool palin = true;

	cin >> s;

	int size = s.length();

	for (int i = 0; i < size / 2; ++i)
	{
		if (s[i] != s[size - i - 1])
			palin = false;
	}

	cout << palin;
}