#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <map>

using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using t3 = tuple<int, int, int>;

#define all(x) (x).begin(), (x).end()

class Calendar{
    int jan = 31;
    int feb = 28;
    int mar = 31;
    int apr = 30;
    int may = 31;
    int jun = 30;
    int jul = 31;
    int aug = 31;
    int sep = 30;
    int oct = 31;
    int nov = 30;
    int dec = 31;

public:
    bool IsLeap(int y)
    {
        return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
    }

    int Leap(int y)
    {
        bool leap = (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);

        return leap ? 366 : 365;
    }

    int MtoD(int m, bool leapYear)
    {
        int febDays = leapYear ? 29 : 28;
        int n = 0;

        switch (m)
        {
        case 12:    n += nov;
        case 11:    n += oct;
        case 10:    n += sep;
        case 9:     n += aug;
        case 8:     n += jul;
        case 7:     n += jun;
        case 6:     n += may;
        case 5:     n += apr;
        case 4:     n += mar;
        case 3:     n += febDays;
        case 2:     n += jan;
        case 1:
        default:
            break;
        }

        return n;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int year, month, day;
    cin >> year >> month >> day;

    int dYear, dMonth, dDay;
    cin >> dYear >> dMonth >> dDay;

    Calendar cal;

    int ttYear = 0;
    for (int i = 1; i < year; ++i)
    {
        ttYear += cal.Leap(i);
    }

    int today = ttYear + cal.MtoD(month, cal.IsLeap(year)) + day;


    int ddYear = 0;
    for (int i = 1; i < dYear; ++i)
    {
        ddYear += cal.Leap(i);
    }

    int dToday = ddYear + cal.MtoD(dMonth, cal.IsLeap(dYear)) + dDay;

    if (year + 1000 < dYear ||
        (year + 1000 == dYear && month < dMonth) ||
        (year + 1000 == dYear && month == dMonth && day <= dDay))
        cout << "gg\n";
    else
    {
        cout << "D-" << dToday - today << "\n";
    }
}