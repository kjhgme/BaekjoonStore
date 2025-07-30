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

    int a, b;
    cin >> a >> b;

    if (a < b || (a + b) % 2 != 0) {
        cout << -1;
        return 0;
    }
    
    int x, y;
    x = (a + b) / 2;
    y = (a - b) / 2;

    if (x < 0 || y < 0) {
        cout << -1;
        return 0;
    }

    if (x > y)
        cout << x << " " << y;
    else
        cout << y << " " << x;
}