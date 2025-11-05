#include <iostream>
#include <vector>
// #include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n;
    cin >> n;

    int cnt = 0;

    for (int i = 0; i < n; ++i)
    {
        string x;

        cin >> x;
        if (s == x)
            cnt++;
    }

    cout << cnt;
}