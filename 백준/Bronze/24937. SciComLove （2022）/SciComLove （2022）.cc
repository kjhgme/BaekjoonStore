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
    cin >> n;

    string s = "SciComLove";

    for (int i = 0; i < n; ++i)
    {
        string s1 = s.substr(0, 1);
        string s2 = s.substr(1, s.size() - 1);

        s = s2 + s1;
    }

    cout << s;
}