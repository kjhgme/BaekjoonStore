#include <iostream>
#include <string>
using namespace std;

int main()
{
	string current_time;
	string start_time;
	int h{}, m{}, s{};
	cin >> current_time;
	cin >> start_time;

	int ch = stoi(current_time);
	int cm = stoi(current_time.substr(3));
	int cs = stoi(current_time.substr(6));
	int sh = stoi(start_time);
	int sm = stoi(start_time.substr(3));
	int ss = stoi(start_time.substr(6));


	if (sh > ch ||
		sh == ch && sm > cm ||
		sh == ch && sm == cm && ss > cs)
	{
		h = sh - ch;
		m = sm - cm;
		s = ss - cs;
		if (s < 0)
		{
			int temp = 60 - abs(s);
			s = temp;
			m -= 1;
		}
		if (m < 0)
		{
			int temp = 60 - abs(m);
			m = temp;
			h -= 1;
		}
	}
	else {
		h = 24 + sh - ch;
		m = sm - cm;
		s = ss - cs;
		if (s < 0)
		{
			int temp = 60 - abs(s);
			s = temp;
			m -= 1;
		}
		if (m < 0)
		{
			int temp = 60 - abs(m);
			m = temp;
			h -= 1;
		}
	}

	printf("%02d:%02d:%02d", h, m, s);
}