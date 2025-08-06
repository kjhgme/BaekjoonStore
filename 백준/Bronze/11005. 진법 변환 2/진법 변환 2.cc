#include <iostream>
#include <vector>
// #include <bits/stdc++.h>

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

    int n, m;
    cin >> n >> m;

    vector<int> v;

    while (n > 0)
    {
        int x = n % m;
        n = n / m;
        v.push_back(x);
    }

    for (int i = v.size() - 1; i >= 0; --i)
    {
        if (v[i] >= 10)
        {
            cout << (char)('A' + (v[i] - 10));
        }
        else
            cout << v[i];
    }
}