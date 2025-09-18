#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

#define all(x) (x).begin(), (x).end()


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    while (s != "#")
    {
        int num = 0;

        for (char c : s)
        {
            if (c == '1')
            {
                num++;
            }
        }

        auto iter = s.end() - 1;
        if (*iter == 'e')
        {
            *iter = (num % 2 == 0 ? '0' : '1');
        }
        else if (*iter == 'o')
        {
            *iter = (num % 2 == 0 ? '1' : '0');
        }

        cout << s << "\n";

        cin >> s;
    }
}