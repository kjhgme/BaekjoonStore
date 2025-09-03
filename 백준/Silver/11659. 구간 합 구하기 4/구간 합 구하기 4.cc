#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> v(n);

    cin >> v[0];

    for (int i = 1; i < n; ++i)
    {
        int x;
        cin >> x;
        v[i] += x + v[i - 1];
    }

    for (int i = 0; i < m; ++i)
    {
        int x, y;
        cin >> x >> y;

        int num = 0;

        if (x != 1)
            num = v[y - 1] - v[x - 2];
        else if (x == 1)
            num = v[y - 1];

        cout << num << "\n";
    }
}