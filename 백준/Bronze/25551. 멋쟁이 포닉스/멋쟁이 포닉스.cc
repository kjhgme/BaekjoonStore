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

    int Mw, Mb;
    int Tw, Tb;
    int Pw, Pb;

    cin >> Mw >> Mb;
    cin >> Tw >> Tb;
    cin >> Pw >> Pb;

    int wMin = min(min(Mb, Pb), Tw);
    int bMin = min(min(Mw, Pw), Tb);

    if (wMin == bMin)
        cout << wMin + bMin;
    else if(wMin > bMin)
    {
        cout << 2 * bMin + 1;
    }
    else if (bMin > wMin)
    {
        cout << 2 * wMin + 1;
    }
}