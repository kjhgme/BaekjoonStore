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

    int n;
    
    while (cin >> n)
    {
        if (n % 6 == 0)
            cout << "Y\n";
        else
            cout << "N\n";
    }
}