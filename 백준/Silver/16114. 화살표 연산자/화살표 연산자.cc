#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n;

    cin >> x >> n;

    if ((x > 0 && n == 0) || (x < 0 && n == 1))
    {
        cout << "INFINITE";
        return 0;
    }
    else if (n != 1 && n % 2 != 0)
    {
        cout << "ERROR";
        return 0;
    }
    else if (x > 0 && n % 2 == 0 && n != 0)
    {
        cout << max(0, (x + (n / 2) - 1) / (n / 2) - 1);
        return 0;
    }
    else
    {
        cout << "0";
        return 0;
    }
}