#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int x{}, y{}, z{};

	cin >> x >> y >> z;

	int mul{};

	mul = x * y * z;

	string strmul = to_string(mul);
	vector<int> v(10);

	for (int i = 0; i < strmul.length(); ++i)
	{
		int n = (int)strmul[i] - 48;
		v[n] += 1;
	}

	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << endl;
}