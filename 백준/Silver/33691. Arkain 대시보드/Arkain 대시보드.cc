#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

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

    unordered_map<string, int> lastUsed;

    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        lastUsed[s] = i;
    }

    int k;
    cin >> k;

    unordered_set<string> pinned;
    for (int i = 0; i < k; ++i)
    {
        string s;
        cin >> s;
        pinned.insert(s);
    }

    vector<string> pinnedList, normalList;
    for (const auto& it : lastUsed)
    {
        if (pinned.count(it.first)) pinnedList.push_back(it.first);
        else normalList.push_back(it.first);
    }

    auto cmp = [&](const string& a, const string& b) {
        return lastUsed[a] > lastUsed[b];
        };

    sort(pinnedList.begin(), pinnedList.end(), cmp);
    sort(normalList.begin(), normalList.end(), cmp);

    for (string& s : pinnedList) cout << s << '\n';
    for (string& s : normalList) cout << s << '\n';

    return 0;
}