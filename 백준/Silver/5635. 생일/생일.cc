#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	string name;
	int day;
	int month;
	int year;

	string name1;	// 나이가 가장 많은 사람
	int day1 = 30;
	int month1 = 12;
	int year1 = 2010;

	string name2;
	int day2 = 1;
	int month2 = 1;
	int year2 = 1990;

	for (int i = 0; i < n; ++i)
	{
		cin >> name >> day >> month >> year;

		if (year < year1 ||
			(year == year1 && month < month1) ||
			(year == year1 && month == month1 && day < day1))
		{
			name1 = name;
			day1 = day;
			month1 = month;
			year1 = year;
		}

		if (year > year2 ||
			(year == year2 && month > month2) ||
			(year == year2 && month == month2 && day > day2))
		{
			name2 = name;
			day2 = day;
			month2 = month;
			year2 = year;
		}
		
	}
	cout << name2 << endl;
	cout << name1 << endl;
}