#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <string>

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

    string num = "`1234567890-=";
    string Q = "QWERTYUIOP[]\\";
    string A = "ASDFGHJKL;'";
    string Z = "ZXCVBNM,./";

    while (getline(cin, s))
    {
        for (int j = 0; j < s.size(); ++j)
        {
            bool found = false;

            for (int i = 0; i < num.size(); ++i)
            {
                if (s[j] == num[i])
                {
                    s[j] = num[i - 1];
                    found = true;
                    break;
                }
            }

            if (found) continue;

            for (int i = 0; i < Q.size(); ++i)
            {
                if (s[j] == Q[i])
                {                
                    s[j] = Q[i - 1];
                    found = true;
                    break;
                }
            }

            if (found) continue;

            for (int i = 0; i < A.size(); ++i)
            {
                if (s[j] == A[i])
                {
                    s[j] = A[i - 1];
                    found = true;
                    break;
                }
            }

            if (found) continue;

            for (int i = 0; i < Z.size(); ++i)
            {
                if (s[j] == Z[i])
                {
                    s[j] = Z[i - 1];
                    found = true;
                    break;
                }
            }            
        }

        cout << s << endl;
    }
}