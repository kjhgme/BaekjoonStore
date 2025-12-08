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

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    sort(all(v), greater<int>());

    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        if ((i + 1) % 3 == 0)
        {
            v[i] = 0;
        }

        sum += v[i];
    }

    cout << sum;
}