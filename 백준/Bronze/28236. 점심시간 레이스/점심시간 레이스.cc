#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <limits.h>

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

    int n, m, k;
    cin >> n >> m >> k;

    int num = INT_MAX;
    int winner = 0;

    for (int i = 0; i < k; ++i)
    {
        int f, d;
        cin >> f >> d;

        int temp = f + m - d;
    
        if (num > temp)
        {
            num = temp;
            winner = i + 1;
        }
    }

    cout << winner;
}