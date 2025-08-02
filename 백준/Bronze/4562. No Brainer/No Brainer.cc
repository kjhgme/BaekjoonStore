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
#define pb push_back
#define fi first
#define se second

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;

        if (a >= b)
            cout << "MMM BRAINS\n";
        else
            cout << "NO BRAINS\n";
    }
   
}