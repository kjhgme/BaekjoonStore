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
    
    vector<long long>v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    long long x = *min_element(all(v));
    long long ans = 0;
    
    for (auto q : v)
    {
        ans += q - x;
    }

    cout << ans;
}