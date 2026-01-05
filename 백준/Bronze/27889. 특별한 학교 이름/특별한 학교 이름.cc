#include <iostream>
#include <vector>
// #include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    if (s == "NLCS")
        cout << "North London Collegiate School";
    else if (s == "BHA")
        cout << "Branksome Hall Asia";
    else if (s == "KIS")
        cout << "Korea International School";
    else if (s == "SJA")
        cout << "St. Johnsbury Academy";
}