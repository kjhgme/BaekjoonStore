#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    sort(all(v));

    int cnt = 0;

    while (!v.empty())
    {
        int num = v[0];

        v.erase(v.begin());
        cnt++;

        for (auto it = v.begin(); it != v.end(); )
        {
            if (*it > num)
            {
                num = *it;
                it = v.erase(it);
            }
            else
            {
                ++it;
            }
        }
    }

    cout << cnt;
}