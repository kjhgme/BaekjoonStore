#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using t3 = tuple<int, int, int>;

#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<string> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        sort(v[i].begin(), v[i].end());
    }

    sort(v.begin(), v.end());

    string s;

    for (int i = 0; i < k; ++i)
    {
        s += v[i];
    }

    sort(s.begin(), s.end());

    cout << s;
}