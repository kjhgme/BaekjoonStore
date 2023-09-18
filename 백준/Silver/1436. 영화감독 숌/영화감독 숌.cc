#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n{};
	int num{ 665 };
	string s;

	cin >> n;

	while (true)
	{
		if (n == 0)
		{
			cout << num;
			break;
		}
		num++;
		s = to_string(num);

		for (int i = 0; i < s.size()-2; ++i)
		{
			if (s[i] == '6' && s[i + 1] == '6' && s[i + 2] == '6')
			{
				n--;
				break;
			}
		}
	}
}