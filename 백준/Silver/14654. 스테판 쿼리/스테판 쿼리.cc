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

    int n;
    cin >> n;

    vector<int> v(n);
    vector<int> v2(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> v2[i];
    }

    int maN = 0;
    int one = 0;
    int two = 0;

    for (int i = 0; i < n; ++i)
    {
        if (v[i] == 1)
        {
            if (v2[i] == 2)
            {
                two++;
                one = 0;
                if (two > maN)
                    maN = two;
            }
            else if (v2[i] == 3)
            {
                one++;
                two = 0;
                if (one > maN)
                    maN = one;
            }
            else
            {
                if (one == 0)
                {
                    one++;
                    two = 0;
                    if (one > maN)
                        maN = one;
                }
                else
                {
                    two++;
                    one = 0;
                    if (two > maN)
                        maN = two;
                }
            }
        }
        else if (v[i] == 2)
        {
            if (v2[i] == 1)
            {
                one++;
                two = 0;
                if (one > maN)
                    maN = one;
            }
            else if (v2[i] == 3)
            {
                two++;
                one = 0;
                if (two > maN)
                    maN = two;
            }
            else
            {
                if (one == 0)
                {
                    one++;
                    two = 0;
                    if (one > maN)
                        maN = one;
                }
                else
                {
                    two++;
                    one = 0;
                    if (two > maN)
                        maN = two;
                }
            }
        }
        else if (v[i] == 3)
        {
            if (v2[i] == 2)
            {
                one++;
                two = 0;
                if (one > maN)
                    maN = one;
            }
            else if (v2[i] == 1)
            {
                two++;
                one = 0;
                if (two > maN)
                    maN = two;
            }
            else
            {
                if (one == 0)
                {
                    one++;
                    two = 0;
                    if (one > maN)
                        maN = one;
                }
                else
                {
                    two++;
                    one = 0;
                    if (two > maN)
                        maN = two;
                }
            }
        }
    }

    cout << maN;
}