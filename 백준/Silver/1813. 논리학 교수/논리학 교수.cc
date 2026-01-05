#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <map>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<int, int> m;

    for (int i = 0; i <= n; ++i)
    {
        m.insert({ i, 0 });
    }

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;

        if (m.find(x) != m.end())
            m[x]++;
    }

    for (auto iter = m.rbegin(); iter != m.rend(); ++iter)
    {
        if (iter->first == iter->second)
        {
            cout << iter->first;
            return 0;
        }
    }

    cout << -1;
}