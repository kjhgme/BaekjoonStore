#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n1, k1, n2, k2;
    cin >> n1 >> k1 >> n2 >> k2;

    cout << n1 * k1 + n2 * k2;
}