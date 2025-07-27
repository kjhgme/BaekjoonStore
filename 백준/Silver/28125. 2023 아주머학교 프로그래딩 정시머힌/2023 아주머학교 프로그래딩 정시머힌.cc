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
#define pb push_back
#define fi first
#define se second

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;


    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;

        int diff = 0;

        for (int j = 0; j < s.size(); ++j)
        {
            switch (s[j])
            {
            case '@':
                diff++;
                s[j] = 'a';
                break;
            case '[':
                diff++;
                s[j] = 'c';
                break;
            case '!':
                diff++;
                s[j] = 'i';
                break;
            case ';':
                diff++;
                s[j] = 'j';
                break;
            case '^':
                diff++;
                s[j] = 'n';
                break;
            case '0':
                diff++;
                s[j] = 'o';
                break;
            case '7':
                diff++;
                s[j] = 't';
                break;
            case '\\':                               
                if (j + 2 < s.size() && s[j + 1] == '\\' && s[j + 2] == '\'')
                {
                    diff++;
                    s[j] = 'w';
                    s.erase(s.begin() + j + 1, s.begin() + j + 3);
                    j--;
                    continue;
                }
                else if (j + 1 < s.size() && s[j + 1] == '\'')
                {
                    diff++;
                    s[j] = 'v';
                    s.erase(s.begin() + j + 1, s.begin() + j + 2);
                    j--;
                    continue;
                }
                break;
            default:
                break;
            }
        }

        if (diff * 2 >= s.size())
            cout << "I don't understand\n";
        else
            cout << s << "\n";
    }
}