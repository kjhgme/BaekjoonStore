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

ll Check(ll low,  ll high, vector<int>& v, int time)
{
    if (low >= high)
        return low;

    ll num = 0;
    ll mid = (low + high) / 2;

    for (int i = 0; i < v.size(); ++i)
    {
        num += mid / v[i];
    }

    if (num >= time)
    {
        return Check(low, mid, v, time);
    }
    else
    {
        return Check(mid + 1, high, v, time);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    ll high = (ll)v.back() * m;

    ll num = Check(v[0], high, v, m);

    cout << num;
}