#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

bool IsAllZero(const vector<int>& v)
{
    for (int x : v)
    {
        if (x != 0)
            return false;
    }
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;

        vector<int> v(n);

        for (int j = 0; j < n; ++j)
        {
            cin >> v[j];
        }

        vector<int>v2(n);

        bool isZero = false;

        for(int z = 0; z < 1000; ++z)
        {
            for (int q = 0; q < n; ++q)
            {
                v2[q] = abs(v[q] - v[(q + 1) % n]);
            }

            if (IsAllZero(v2))
            {
                isZero = true;
                break;
            }

            for (int q = 0; q < n; ++q)
            {
                v[q] = abs(v2[q] - v2[(q + 1) % n]);
            }

            if (IsAllZero(v))
            {
                isZero = true;
                break;
            }
        }

        if (isZero)
            cout << "ZERO\n";
        else
            cout << "LOOP\n";
    }
} 