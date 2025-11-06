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
    
    v[v.size() - 1] = 1;


    for (int i = v.size() - 1; i >= 0; --i)
    {
        if (i != v.size() - 1)
        {
            if (v[i] > v[i + 1] + 1)
            {
                v[i] = v[i + 1] + 1;
            }
        }
    }

    long long sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += v[i];
    }

    cout << sum;
}