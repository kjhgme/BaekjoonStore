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

    int n, m, k;
    cin >> n >> m >> k;

    vector<long long> va(n);
    vector<long long> vb(m);

    long long totalA = 0;
    long long totalB = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> va[i];
        totalA += va[i];
    }

    for (int i = 0; i < m; ++i)
    {
        cin >> vb[i];
        totalB += vb[i];
    }

    long long total = min(totalA, totalB);
    long long time = 0;

    totalA = total;
    totalB = total;

    for (int i = 0; i < n && totalA > 0; ++i)
    {
        long long floor = min(va[i], totalA);
        time += floor * (i + 1);
        totalA -= floor;
    }

    for (long long i = 0; i < m && totalB > 0; ++i)
    {
        long long floor = min(vb[i], totalB);
        time += floor * (i + 1);
        totalB -= floor;
    }

    cout << total << " " << time;
}