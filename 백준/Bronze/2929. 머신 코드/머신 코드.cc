#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <cctype>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int cnt = 0;
    int OperCheck = 0;

    int convert[4] = { 0, 3, 2, 1 };

    for (int i = 0; i < s.size(); ++i)
    {
        if (isupper(s[i]))
        {
            int num = ((i - OperCheck) % 4);
            OperCheck = i;
            cnt += convert[num];
        }
    }

    cout << cnt;
} 