#include <iostream>
#include <vector>
// #include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long X, Y;
    cin >> X >> Y;

    if (X > Y) 
    {
        cout << -1;
    }
    else
    {
        long long result = (2024 * (2 * X - Y)) / 4;
        cout << result;
    }
}