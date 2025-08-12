#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <string>

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

enum class MonthEnum {
    January, February, March, April, May, June,
    July, August, September, October, November, December,
    Unknown
};

MonthEnum ToMonthEnum(const std::string& month) {
    if (month == "January")   return MonthEnum::January;
    if (month == "February")  return MonthEnum::February;
    if (month == "March")     return MonthEnum::March;
    if (month == "April")     return MonthEnum::April;
    if (month == "May")       return MonthEnum::May;
    if (month == "June")      return MonthEnum::June;
    if (month == "July")      return MonthEnum::July;
    if (month == "August")    return MonthEnum::August;
    if (month == "September") return MonthEnum::September;
    if (month == "October")   return MonthEnum::October;
    if (month == "November")  return MonthEnum::November;
    if (month == "December")  return MonthEnum::December;
    return MonthEnum::Unknown;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Calendar cal;

    string Month;
    string Day;
    int Year;
    string HHMM;

    // May 10, 1981 00:31
    cin >> Month >> Day >> Year >> HHMM;

    Day.pop_back();
    int D = stoi(Day);
    int M = 0;
    int hour = stoi(HHMM.substr(0, 2));
    int min = stoi(HHMM.substr(3, 2));


    switch (ToMonthEnum(Month)) {
    case MonthEnum::January:
        M = 1;
        break;
    case MonthEnum::February:
        M = 2;
        break;
    case MonthEnum::March:
        M = 3;
        break;
    case MonthEnum::April:
        M = 4;
        break;
    case MonthEnum::May:
        M = 5;
        break;
    case MonthEnum::June:
        M = 6;
        break;
    case MonthEnum::July:
        M = 7;
        break;
    case MonthEnum::August:
        M = 8;
        break;
    case MonthEnum::September:
        M = 9;
        break;
    case MonthEnum::October:
        M = 10;
        break;
    case MonthEnum::November:
        M = 11;
        break;
    case MonthEnum::December:
        M = 12;
        break;
    default:
        break;
    }

    bool isLeap = cal.IsLeap(Year);
    int total = cal.MtoD(M, isLeap) + D - 1;

    double dayFraction = (hour * 60.0 + min) / (24.0 * 60.0);

    double lastTotal = total + dayFraction;

    int y = cal.Leap(Year);

    double answer = (double)lastTotal / (double)y * 100.0;

    cout << fixed;
    cout.precision(10);
    cout << answer;
}