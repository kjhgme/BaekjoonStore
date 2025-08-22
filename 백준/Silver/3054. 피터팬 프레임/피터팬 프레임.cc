#include <iostream>
#include <vector>
#include <list>
using namespace std;

string s1;
string s2;
string s3;
string s4;
string s5;

void frame1(int n)
{
	if ((n + 1) % 3 == 0)
		s1 += "..*..";
	else
		s1 += "..#..";
}
void frame2(int n)
{
	if ((n + 1) % 3 == 0)
		s2 += ".*.*.";
	else
		s2 += ".#.#.";
}
void frame3(int n, char c)
{
	if ((n + 1) % 3 == 0)
	{
		s3 += "*.";
		s3 += c;
		s3 += ".*";
	}
	else
	{
		s3 += "#.";
		s3 += c;
		s3 += ".#";
	}
}
void frame4(int n)
{
	if ((n + 1) % 3 == 0)
		s4 += ".*.*.";
	else
		s4 += ".#.#.";
}
void frame5(int n)
{
	if ((n + 1) % 3 == 0)
		s5 += "..*..";
	else
		s5 += "..#..";
}
int main()
{
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); ++i)
	{
		frame1(i);
		frame2(i);
		frame3(i, s[i]);
		frame4(i);
		frame5(i);
	}

	for (int i = s1.size() - 1; i > 0; --i)
	{
		if (i % 5 == 0)
		{
			s1.erase(i, 1);
			s2.erase(i, 1);
			if (s3[i] == '*')
				s3.erase(i - 1, 1);
			else
				s3.erase(i, 1);
			s4.erase(i, 1);
			s5.erase(i, 1);
		}
	}

	cout << s1 << "\n";
	cout << s2 << "\n";
	cout << s3 << "\n";
	cout << s4 << "\n";
	cout << s5 << "\n";
}