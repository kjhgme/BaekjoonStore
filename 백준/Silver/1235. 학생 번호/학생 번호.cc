#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <set>

using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using t3 = tuple<int, int, int>;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fi first
#define se second

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<string> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    int len = 0;

    for (int l = 1; l <= v[0].size(); ++l)
    {
        set<string> s;
        for (int i = 0; i < n; ++i)
        {
            if (l <= v[i].size())
                s.insert(v[i].substr(v[i].size() - l, l));
        }

        if (s.size() == n) {
            len = l;
            break;
        }
    }

    cout << len;
}