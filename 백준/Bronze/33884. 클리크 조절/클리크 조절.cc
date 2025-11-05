#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;

        v[i] = { x, y };
    }

    sort(all(v));

    vector<pair<int, int>> v2(n);
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;

        v2[i] = { x, y };
    }
    sort(all(v2));

    cout << v2[0].first - v[0].first << " " << v2[0].second - v[0].second;
}