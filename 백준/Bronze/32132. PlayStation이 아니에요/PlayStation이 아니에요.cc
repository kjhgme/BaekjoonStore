#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <string>

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

    int n;
    cin >> n;

    string s;
    cin >> s;


    for (int i = 0; i + 2 < s.size(); ++i)
    {
        if (s[i] == 'P' && s[i + 1] == 'S')
        {
            if (s[i + 2] == '4' || s[i + 2] == '5')
            {
                s.erase(i + 2, 1);
                i--;
            }
        }
    }

    cout << s;
}