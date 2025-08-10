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

    string minWord = "z";

    for (int i = 1; i < s.size() - 1; ++i)
    {
        for (int j = i + 1; j < s.size(); ++j)
        {
            string s1, s2, s3;

            s1 = s.substr(0, i);
            s2 = s.substr(i, j - i);
            s3 = s.substr(j);

            reverse(s1.begin(), s1.end());
            reverse(s2.begin(), s2.end());
            reverse(s3.begin(), s3.end());

            string temp = s1 + s2 + s3;

            if (minWord > temp)
                minWord = temp;
        }
    }

    cout << minWord;
}