#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <set>

using namespace std;

#define all(x) (x).begin(), (x).end()


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> s;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            if (s.empty())
                cout << 0 << "\n";
            else
            {
                auto iter = prev(s.end());
                cout << *iter << "\n";
                s.erase(prev(s.end()));
            }
        }
        else
            s.insert(x);
    }
}