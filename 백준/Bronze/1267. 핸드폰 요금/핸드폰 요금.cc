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

    int m = 0;
    int y = 0;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;

        y += ((x / 30) + 1) * 10;
        m += ((x / 60) + 1) * 15;
    }

    if (m < y)
        cout << "M " << m;
    else if (m > y)
        cout << "Y " << y;
    else
        cout << "Y M " << y;
}