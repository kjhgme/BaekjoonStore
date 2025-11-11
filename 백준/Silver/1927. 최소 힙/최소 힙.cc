#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <set>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    multiset<int> ms;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;

        if (x != 0)
            ms.insert(x);
        else
        {
            if (ms.empty())
                cout << "0\n";
            else
            {
                cout << *ms.begin() << "\n";

                ms.erase(ms.begin());
            }
        }
    }
}