#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;

    for (auto& x : a)
    {
        if (x == '6')
        {
            x = '5';
        }
    }
    for (auto& x : b)
    {
        if (x == '6')
        {
            x = '5';
        }
    }

    int min = stoi(a) + stoi(b);

    for (auto& x : a)
    {
        if (x == '5')
        {
            x = '6';
        }
    }
    for (auto& x : b)
    {
        if (x == '5')
        {
            x = '6';
        }
    }

    int max = stoi(a) + stoi(b);

    cout << min << " " << max;
}