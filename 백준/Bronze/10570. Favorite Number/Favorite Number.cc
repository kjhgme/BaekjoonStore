#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <set>

using namespace std;

#define all(x) (x).begin(), (x).end()

bool vecSor(pair<int, int> v1, pair<int, int> v2)
{
    if (v1.second == v2.second)
        return v1.first < v2.first;

    return v1.second > v2.second;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int v;
        cin >> v;
        
        vector<pair<int, int>> vv;

        for (int j = 0; j < v; ++j)
        {
            int s;
            cin >> s;

            bool find = false;

            for (auto& x : vv)
            {
                if (x.first == s)
                {
                    x.second++;
                    find = true;
                    break;
                }
            }

            if (!find)
            {
                vv.push_back({ s, 1 });
            }
        }

        sort(vv.begin(), vv.end(), vecSor);

        cout << vv[0].first << "\n";
    }
}