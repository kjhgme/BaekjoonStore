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

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int a, b;
        cin >> a >> b;

        if (a == 0)
            cout << "no\n";
        else
            cout << "yes\n";
    }
}