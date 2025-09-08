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
    
    int n;
    cin >> n;

    int cnt = 1;
    int time = 0;

    while (n > 0)
    {
        if (cnt > n)
        {
            cnt = 1;
            continue;
        }

        n -= cnt;
        time++;
        cnt++;
    }

    cout << time;
}