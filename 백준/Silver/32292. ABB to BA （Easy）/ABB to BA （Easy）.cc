#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;

        string s;
        cin >> s;

        for (int j = 0; j + 2 < s.size(); )
        {
            if (s[j] == 'A' && s[j + 1] == 'B' && s[j + 2] == 'B')
            {
                s[j] = 'B';
                s[j + 1] = 'A';
                s.erase(j + 2, 1);
                j = max(j - 2, 0);
            }
            else
                j++;
        }

        cout << s << "\n";
    }
}