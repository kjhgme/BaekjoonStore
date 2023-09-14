#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string s;
	int wordCount = 0;

	getline(cin, s);
	istringstream iss(s);

	while (iss >> s) {
		wordCount++;
	}

	cout << wordCount;
}