#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d, p;
    cin >> n >> d >> p;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int turn = 0;
    int overdamage = 0;

    bool overkilled = false;

    for (int i = 0; i < n; ++i)
    {
        if (overkilled)
        {
            a[i] -= overdamage;
            overkilled = false;
        }

        while (a[i] > 0)
        {
            turn++;
            a[i] -= d;
            overkilled = true;
        }

        if (a[i] == 0)
            overkilled = false;

        float temp = abs(a[i]);
        overdamage = temp * p / 100;
    }

    cout << turn;
}