#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define all(x) (x).begin(), (x).end()

int temp(int x)
{
    return x * (x + 1) / 2;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int  x;
        cin >> x;

        int sum = 0;
        for (int j = 1; j <= x; ++j)
        {
            sum += temp(j + 1) * j;
        }
        cout << sum << endl;
    }
}