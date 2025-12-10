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

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i].first >> v[i].second;
    }

    long long preD = 0;
    long long preV = 0;
    long long needT = 0;

    for (int i = 0; i < n; i++) {
        int D = v[i].first;
        int V = v[i].second;

        preV += V;
        long long required = preV - preD;
        if (required > needT) needT = required;

        preD += D;
    }

    if (needT < 0) needT = 0;
    cout << needT;
    return 0;
}