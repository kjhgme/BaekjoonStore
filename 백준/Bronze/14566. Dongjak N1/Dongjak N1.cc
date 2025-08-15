#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <climits>

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

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int temp = INT_MAX;
    int cnt = 0;

    for (int i = 0; i < n - 1; ++i)
    {
        if (v[i + 1] - v[i] == temp)
            cnt++;
        else if (v[i + 1] - v[i] < temp)
        {
            temp = v[i + 1] - v[i];
            cnt = 1;
        }
    }

    cout << temp << " " << cnt;
}