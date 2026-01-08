#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<pair<char, int>>> v2(m, {
        { 'A', 0 }, { 'C', 0 }, { 'G', 0 }, { 'T', 0 }
        });

    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;

        for (int j = 0; j < m; ++j)
        {
            if (s[j] == 'A')        v2[j][0].second++;
            else if (s[j] == 'C')   v2[j][1].second++;
            else if (s[j] == 'G')   v2[j][2].second++;
            else if (s[j] == 'T')   v2[j][3].second++;
        }
    }

    string ans;

    for (int i = 0; i < m; ++i)
    {
        auto it = max_element(
            v2[i].begin(), v2[i].end(),
            [](const pair<char, int>& a, const pair<char, int>& b) {
                return a.second < b.second;
            }
        );
        ans += it->first;
    }

    cout << ans << "\n";

    int dist = 0;

    for (int j = 0; j < m; ++j)
    {
        auto it = max_element(
            v2[j].begin(), v2[j].end(),
            [](const pair<char, int>& a, const pair<char, int>& b) {
                if (a.second == b.second)
                    return a.first > b.first;
                return a.second < b.second;
            }
        );

        ans += it->first;
        dist += n - it->second;
    }
    
    cout << dist;
}