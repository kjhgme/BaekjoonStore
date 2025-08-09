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

    cout << "Gnomes:\n";

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a >= b && b >= c)
        {
            cout << "Ordered\n";
        }
        else if (a <= b && b <= c)
        {
            cout << "Ordered\n";
        }
        else
        {
            cout << "Unordered\n";
        }
    }
}