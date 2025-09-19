#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

#define all(x) (x).begin(), (x).end()


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    long long maxA = 0;

    for (int i = 1; i < n - 1; ++i)
    {
        long long newA = v[i] + min(v[i - 1], v[i + 1]);

        if (newA > maxA)
            maxA = newA;
    }

    if (v[0] > maxA) 
    {
        maxA = v[0];
    }
    if (v.back() > maxA) 
    {
        maxA = v.back();
    }

    if (n < 3) 
    {
        maxA = 0;
        for (int i = 0; i < n; ++i)
        {
            if (v[i] > maxA) 
            {
                maxA = v[i];
            }
        }
    }

    cout << maxA;
}