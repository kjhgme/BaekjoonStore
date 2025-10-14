#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <list>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    list<int> l;
    vector<int> ans;

    for (int i = 0; i < n; ++i)
    {
        l.push_back(i + 1);
    }

    auto iter = l.begin();

    while (!l.empty())
    {
        for (int i = 1; i < k; ++i)
        {
            ++iter;
            if (iter == l.end())
                iter = l.begin();
        }

        ans.push_back(*iter);

        auto erase_iter = iter;
        ++iter;
        if (iter == l.end())
            iter = l.begin();

        l.erase(erase_iter);
    }

    cout << "<";
    for (int i = 0; i < ans.size(); ++i)
    {
        cout << ans[i];
        if (i != ans.size() - 1)
            cout << ", ";
    }
    cout << ">";
} 