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

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, h, w;

    cin >> n >> h >> w;

    vector<string> v;
    for (int i = 0; i < h; ++i)
    {
        string s;
        cin >> s;

        v.push_back(s);
    }

    string s(n, '?');

    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < n * w; ++j)
        {
            if (s[j / w] != '?')
                continue;
            else
                s[j / w] = v[i][j];
        }
    }

    cout << s;
}