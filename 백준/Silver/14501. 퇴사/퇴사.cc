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

    vector<pair<int, int>> v(n + 1);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i].first >> v[i].second;
    }

    vector<int> dp(n + 2, 0); 
    for (int i = n - 1; i >= 0; --i)
    {
        int duration = v[i].first;
        int gain = v[i].second;

        if (i + duration <= n)
            dp[i] = max(gain + dp[i + duration], dp[i + 1]);
        else
            dp[i] = dp[i + 1];
    }

    cout << dp[0];
}