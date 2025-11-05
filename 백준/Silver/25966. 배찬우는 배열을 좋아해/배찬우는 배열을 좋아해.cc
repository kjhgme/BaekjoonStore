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

    int n, m, q;
    cin >> n >> m >> q;

    vector<vector<int>> v(n, vector<int>(m));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < q; ++i)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == 0)
        {
            int k;
            cin >> k;

            v[b][c] = k;
        }
        else if (a == 1)
        {
            swap(v[b], v[c]);
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
}