#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    vector<pair<string, int>> v;

    int n;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;

        bool found = false;
        for (auto& p : v)
        {
            if (p.first == s)
            {
                p.second++;
                found = true;
                break;
            }
        }
        if (!found)
        {
            v.push_back({ s, 1 });
        }
    }

    sort(v.begin(), v.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.first > b.first;
        });

    auto max_iter = max_element(v.begin(), v.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
        });

    if (max_iter != v.end())
    {
        cout <<  max_iter->first << " " << max_iter->second << "\n";
    }
}
