#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	string s[5];
	char c[5][15]{};

	for (int i = 0; i < 5; ++i) {
		getline(cin, s[i]);
	}

	for (int i = 0; i < 5; ++i) {
		for (size_t j = 0; j < s[i].size(); ++j) {
			c[i][j] = s[i][j];
		}
	}

	for (int j = 0; j < 15; ++j) {
		for (int i = 0; i < 5; ++i) {
			while (c[i][j] == '\0')
			{
				i++;
				if (i >= 5)
					break;
			}

			if (i >= 5)
				break;

			cout << c[i][j];
		}
	}

}