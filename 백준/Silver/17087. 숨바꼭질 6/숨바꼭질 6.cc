#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <numeric>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s;
    cin >> n >> s;

    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    vector<int> div(n);

    for (int i = 0; i < n; ++i)
    {
        div[i] = abs(v[i] - s);
    }

    int ans = div[0];
    for (int i = 1; i < n; ++i)
        ans = gcd(ans, div[i]);

    cout << ans;
}