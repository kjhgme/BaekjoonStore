#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <set>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int x = 0;
    int y = 0;

    set<int> v;

    v.insert(0);

    for (int i = 0; i < s.size() - 1; ++i)
    {
        for (int j = 2; j <= s.size() - i; j += 2)
        {
            string s2 = s.substr(i, j);

            int x = 0;
            int y = 0;

            for (int k = j / 2; k > 0; --k)
            {
                x += s2[k - 1] - '0';
                y += s2[j - k] - '0';
            }

            if (x == y)
                v.insert(j);
        }
    }

    auto it = v.end();
    it--;


    cout << *it;
}