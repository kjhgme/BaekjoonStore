#include <iostream>
#include <set>

using namespace std;

int main()
{
	int n, m;
	set<string> s1;
	set<string> s2;
	set<string> s3;

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;
		s1.insert(s);
	}
	for (int i = 0; i < m; ++i)
	{
		string s;
		cin >> s;
		s2.insert(s);
	}
	
	set<string>::iterator iter;

	for (auto s : s1)
	{
		iter = s2.find(s);

		if (iter != s2.end())
			s3.insert(s);
	}

	cout << s3.size() << endl;

	for (auto s : s3)
	{
		cout << s.c_str() << "\n";
	}
}
