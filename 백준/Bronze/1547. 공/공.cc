#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m;
    cin >> m;

    vector<bool> v(3, false);

    v[0] = true;

    for (int i = 0; i < m; ++i)
    {
        int x, y;
        cin >> x >> y;

        swap(v[x - 1], v[y - 1]);
    }

    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i])
            cout << i + 1;
    }
}