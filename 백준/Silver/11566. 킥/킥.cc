#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <set>

using namespace std;

#define all(x) (x).begin(), (x).end()


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> v1(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v1[i];
    }

    int m;
    cin >> m;

    vector<long long> v2(m);

    for (int i = 0; i < m; ++i)
    {
        cin >> v2[i];
    }

    set<long long> ans;

    for (long long step = 1; step <= m / (n > 1 ? n - 1 : 1); ++step)
    {
        for (long long start = 0; start < m; ++start)
        {
            if (start + (step * (n - 1)) >= m)
            {
                break;
            }

            bool match = true;
            for (long long j = 0; j < n; ++j)
            {
                if (v2[start + j * step] != v1[j])
                {
                    match = false;
                    break;
                }
            }

            if (match)
            {
                ans.insert(step);
            }
        }
    }


    if (ans.empty())
    {
        cout << -1;
    }
    else
    {
        cout << *ans.begin() - 1 << " " << *ans.rbegin() - 1;
    }
}