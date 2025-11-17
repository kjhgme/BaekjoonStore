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

    int n, k;
    cin >> n >> k;
    
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    vector<int> v2(v.size() - k + 1);

    for (int i = 0; i <= v.size() - k; ++i)
    {
        for (int j = i; j < k + i; ++j)
        {
            v2[i] += v[j];
        }
    }

    int num = *max_element(all(v2));

    cout << num;
}