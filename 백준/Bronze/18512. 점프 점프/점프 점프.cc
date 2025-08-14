#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <string>

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

    int x, y, p1, p2;
    cin >> x >> y >> p1 >> p2;

    for (int a = 0; a <= 10'000; a++)
    {
        int val = p1 + x * a;

        if ((val - p2) % y == 0 && val >= p2)
        {
            cout << val;
            return 0;
        }
    }

    cout << -1;
}