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

    int cnt = 0;

    for (int i = 1; i <= 1000; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            if (j * j + n == i * i)
                cnt++;
        }
    }

    cout << cnt;
}