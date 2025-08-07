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

    long long a, x;
    cin >> a >> x;

    long long answer = 1;
    a %= MOD;

    while (x > 0)
    {
        if (x % 2 == 1)
        {
            answer = (answer * a) % MOD;
        }
        a = (a * a) % MOD;
        x /= 2;
    }

    cout << answer;
}