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

    int x;
    cin >> x;

    for (int i = 0; i < x; ++i)
    {
        long long n, m;
        cin >> n >> m;

        long long num;
        num = (m * (m + 1) / 2) - ((n - 1) * n / 2);

        cout << "Scenario #" << i + 1 << ":\n";
        cout << num << "\n\n";
    }
} 