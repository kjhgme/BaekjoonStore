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
    
    vector<int>v(n);
    vector<int>v2(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> v2[i];
    }

    const int W = 99;
    vector<int> dp(W + 1, 0);

    for (int i = 0; i < n; ++i)
    {
        int weight = v[i];
        int value = v2[i];

        for (int j = W; j >= weight; --j)
        {
            dp[j] = max(dp[j], dp[j - weight] + value);
        }
    }

    cout << dp[W];
}