#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <math.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int k = (int)ceil((sqrt(8.0 * n + 1) - 1) / 2);

    int start = (k - 1) * k / 2 + 1;

    int d = n - start;

    int a = k - d;
    int b = 1 + d;

    cout << a << " " << b << '\n';
    return 0;
}