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

    vector<int> v;
    vector<int> v2;

    for (int i = 0; i < m; ++i)
    {
        int x, y;
        cin >> x >> y;

        v.push_back(x);
        v2.push_back(y);
    }

    sort(all(v));
    sort(all(v2));

    int sum = 0;
    int less = n % 6;

    sum += (n / 6) * v[0];

    if (less)
    {
        if (v2[0] * less > v[0])
        {
            sum += v[0];
        }
        else
        {
            sum += (v2[0] * less);
        }
    }

    int temp = v2[0] * n;

    if (temp < sum)
        cout << temp;
    else
        cout << sum;
} 