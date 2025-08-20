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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    int x = 0, y = 0;

    if (c < abs(a) + abs(b))
    {
        cout << "NO";
        return 0;
    }

    c -= abs(a);
    c -= abs(b);

    if (c % 2 == 0)
        cout << "YES";
    else
        cout << "NO";
}