#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>

using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using t3 = tuple<int, int, int>;

#define all(x) (x).begin(), (x).end()

int find(int first, int last, vector<int>& v, int man)
{
    if (last < first)
        return 0;

    int mid = (first + last) / 2;
    long long cnt = 0;

    for (int i = 0; i < v.size(); ++i)
    {
        cnt += v[i] / mid;
    }

    if (cnt >= man)
    {
        int next = find(mid + 1, last, v, man);
        return max(mid, next);
    }
    else if (cnt < man)
    {
        return find(first, mid - 1, v, man);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;

    vector<int> l(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> l[i];
    }

    int max = *max_element(l.begin(), l.end());
            
    cout << find(1, max, l, m);
}