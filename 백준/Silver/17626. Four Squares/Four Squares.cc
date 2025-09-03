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

    int n;
    cin >> n;

    vector<int> v(n + 1);

    v[0] = 0;
    v[1] = 1;
    v[2] = 2;

    for (int i = 3; i <= n; ++i)
    {
        v[i] = i;

        for (int j = 1; j * j <= i; ++j)
        {
            v[i] = min(v[i], v[i - j * j] + 1);
        }
    }

    cout << v[n];
}