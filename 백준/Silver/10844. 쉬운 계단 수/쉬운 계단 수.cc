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

    vector<vector<long long>> v(n, vector<long long>(10, 0));

    for (int i = 1; i < 10; ++i)
    {
        v[0][i] = 1;
    }

    for (int i = 1; i < n; ++i)
    {
        v[i][0] = v[i - 1][1] % 1'000'000'000;

        for (int j = 1; j < 9; ++j)
        {
            v[i][j] = (v[i - 1][j - 1] + v[i - 1][j + 1]) % 1'000'000'000;
        }

        v[i][9] = v[i - 1][8] % 1'000'000'000;
    }

    long long sum = 0;

    for (int i = 0; i < 10; ++i)
    {
        sum += v[n - 1][i] % 1'000'000'000;
    }

    cout << sum % 1'000'000'000;
}