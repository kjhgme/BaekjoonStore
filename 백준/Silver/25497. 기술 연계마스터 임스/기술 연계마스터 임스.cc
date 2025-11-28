#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <queue>

using namespace std;

#define all(x) (x).begin(), (x).end()


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int combo = 0;
    int lc = 0;
    int sc = 0;
    for (auto a : s)
    {
        if ('1' <= a && a <= '9')
        {
            combo++;
        }
        else if (a == 'L')
        {
            lc++;
        }
        else if (a == 'S')
        {
            sc++;
        }
        else if (a == 'R')
        {
            if (lc > 0)
            {
                lc--;
                combo++;
            }
            else
            {
                break;
            }
        }
        else if (a == 'K')
        {
            if (sc > 0)
            {
                sc--;
                combo++;
            }
            else
            {
                break;
            }
        }
    }

    cout << combo;
}