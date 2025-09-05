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

    int n, m;
    cin >> n >> m;


    vector<int> v(n);

    for (int i = 0; i < n; ++i)
        cin >> v[i];

    sort(v.begin(), v.end());

    for (int i = 0; i < m; ++i)
    {
        int x, y;
        cin >> x >> y;

        auto lower = lower_bound(v.begin(), v.end(), x);
        auto upper = upper_bound(v.begin(), v.end(), y);

        cout << upper - lower << "\n";
    }
}