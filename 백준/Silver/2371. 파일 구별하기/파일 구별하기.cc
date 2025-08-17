#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <sstream>
#include <climits>
#include <set>

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
    cin.ignore();

    vector<vector<int>> v(n);

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;

        while (x != -1)
        {
            v[i].push_back(x);
            cin >> x;
        }
    }

    int fileSize = 0;
    for (auto& row : v) fileSize = max(fileSize, (int)row.size());

    for (int i = 0; i < n; ++i)
    {
        while (v[i].size() < fileSize)
        {
            v[i].push_back(0);
        }
    }

    for (int j = 0; j < v[0].size(); ++j)
    {
        set<vector<int>> s;
        bool check = true;

        for (int i = 0; i < n; ++i)
        {
            vector<int> vv;
            for (int k = 0; k <= j; ++k)
            {
                vv.push_back(v[i][k]);
            }

            auto key = s.insert(vv);

            if (!key.second)
            {
                check = false;
                break;
            }
        }

        if (check)
        {
            cout << j + 1;
            break;
        }
    }
}