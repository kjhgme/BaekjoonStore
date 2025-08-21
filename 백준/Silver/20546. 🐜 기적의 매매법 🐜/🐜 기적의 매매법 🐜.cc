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

    int n;
    cin >> n;

    vector<int> v;

    int a = 0, b = 0;
    int am = n, bm = n;

    int upCnt = 0, downCnt = 0;

    for (int i = 0; i < 14; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);

        while (am >= x)
        {
            am -= x;
            a++;
        }
    }

    for (int i = 1; i < 14; ++i)
    {
        if (v[i - 1] < v[i])
        {
            upCnt++;
            downCnt = 0;
        }
        else if (v[i - 1] > v[i])
        {
            downCnt++;
            upCnt = 0;
        }

        if (upCnt >= 3)
        {
            bm += v[i] * b;
            b = 0;
        }
        else if (downCnt >= 3)
        {
            while (bm >= v[i])
            {
                bm -= v[i];
                b++;
            }
        }
    }

    am += a * v[13];
    bm += b * v[13];

    if (am > bm)
        cout << "BNP";
    else if (am < bm)
        cout << "TIMING";
    else
        cout << "SAMESAME";
}