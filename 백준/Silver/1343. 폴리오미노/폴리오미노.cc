#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>

using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using t3 = tuple<int, int, int>;

#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int cnt = 0;

    vector<int> v;

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == 'X')
        {
            cnt++;
        }
        else
        {
            if (cnt != 0)
                v.push_back(cnt);
            
            cnt = 0;
        }
    }

    v.push_back(cnt);

    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] % 2 != 0)
        {
            cout << -1;
            return 0;
        }
    }

    int vCnt = 0;

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '.')
            cout << ".";
        else
        {
            i += v[vCnt] - 1;

            int x = 0;
            while (x < v[vCnt] / 4)
            {
                cout << "AAAA";
                x++;
            }

            int a = v[vCnt] % 4;

            if (a != 0)
                cout << "BB";

            vCnt++;
        }
    }
}