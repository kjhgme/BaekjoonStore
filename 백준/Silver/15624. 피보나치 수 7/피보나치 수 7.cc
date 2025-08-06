#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <string>

using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using t3 = tuple<int, int, int>;

#define all(x) (x).begin(), (x).end()

const int MOD = 1'000'000'007;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 0;
        return 0;
    }

    long long a = 0;
    long long b = 1;

    for (int i = 2; i <= n; ++i)
    {
        long long temp = (a + b) % MOD;
        a = b;
        b = temp;
    }

    cout << b;
}