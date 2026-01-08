#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <string>

using namespace std;

#define all(x) (x).begin(), (x).end()

string forward(const string& s)
{
    string res;
    for (int i = 0; i < s.size(); )
    {
        int j = i;
        while (j < s.size() && s[i] == s[j]) j++;
        res += to_string(j - i);
        res += s[i];
        i = j;
    }
    return res;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;

    int cnt = 1;
    while (cin >> s)
    {
        if (s == "0") return 0;

        string next = s;
        while (next.size() % 2 == 0)
        {
            string ans;

            for (int i = 0; i < next.size(); i += 2)
            {
                int nCnt = next[i] - '0';
                int num = next[i + 1] - '0';

                for (int j = 0; j < nCnt; ++j)
                {
                    ans += (char)(num + '0');
                }
            }
            
            if (forward(ans) != next)
            {
                next = s;
                break;
            }

            if (next == ans) break;

            next = ans;
        }

        cout << "Test " << cnt << ": " << next << "\n";
        cnt++;
    }
}