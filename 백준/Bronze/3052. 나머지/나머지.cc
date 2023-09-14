#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int> s;
	int num;

	for (int i = 0; i < 10; ++i)
	{
		cin >> num;
		s.insert(num % 42);
	}

	cout << s.size();
}