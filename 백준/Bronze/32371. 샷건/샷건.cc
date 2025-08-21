#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>

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

    vector<vector<char>> v(4);

    for (int i = 0; i < 4; ++i)
    {
        string s;
        cin >> s;

        for (char c : s)
        {
            v[i].push_back(c);
        }
    }

    string s;
    cin >> s;

    vector<pair<int, int>> v2;

    for (auto c : s)
    {
        for (int i = 0; i < 4; ++i)
        {
            auto iter = find(v[i].begin(), v[i].end(), c);
            if (iter != v[i].end())
            {
                int y = iter - v[i].begin();
                v2.push_back(make_pair(i, y));
                break;
            }
        }
    }
    
    sort(v2.begin(), v2.end());
    
    cout << v[v2[4].first][v2[4].second];
}