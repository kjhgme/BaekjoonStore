#include <iostream>
// #include <bits/stdc++.h>

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
        string s;
        cin >> s;

        if (6 <= s.size() && s.size() <= 9)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}