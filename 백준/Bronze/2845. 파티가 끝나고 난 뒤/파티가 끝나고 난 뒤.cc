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
#define pb push_back
#define fi first
#define se second

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int l, p;
    cin >> l >> p;

    for (int i = 0; i < 5; ++i)
    {
        int n;
        cin >> n;

        cout << n - (l * p) << " ";
    }
}