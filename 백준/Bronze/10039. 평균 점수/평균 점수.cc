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

    int sum = 0;
    
    for (int i = 0; i < 5; ++i)
    {
        int x;
        cin >> x;

        if (x < 40)
            x = 40;

        sum += x;
    }

    cout << sum / 5;
}