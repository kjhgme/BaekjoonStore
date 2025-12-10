#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <queue>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, k;
    cin >> a >> k;

    int cnt = 0;
    while (a != k)
    {
        cnt++;

        if (k % 2 != 0)
        {
            k -= 1;
        }
        else if(k >= a * 2)
        {
            k /= 2;
        }
        else
        {
            k -= 1;
        }
    }

    cout << cnt;
}