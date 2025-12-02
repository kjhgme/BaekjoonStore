#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <set>
#include <string>

using namespace std;

#define all(x) (x).begin(), (x).end()


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<int> v;
    vector<char> v2;

    int temp = 0;
    for(auto x : s)
    {
        if ('0' <= x && x <= '9')
        {
            temp = temp * 10 + (x - '0');
        }
        else
        {
            v.push_back(temp);
            temp = 0;
            v2.push_back(x);
        }
    }

    v.push_back(temp);

    for (int i = v2.size() - 1; i >= 0; --i)
    {
        if (v2[i] == '+')
        {
            v[i] += v[i + 1];
            v[i + 1] = 0;
        }
    }

    for (int i = 0; i < v2.size(); ++i)
    {
        if (v2[i] == '-')
        {
            v[i + 1] *= -1;
        }
    }

    int ans = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        ans += v[i];
    }

    cout << ans;
}