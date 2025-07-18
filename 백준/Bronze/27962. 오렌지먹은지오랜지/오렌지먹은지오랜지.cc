#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
#include <deque>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
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

    string s;
    cin >> s;

    vector<char> v;
    deque<char> dq;

    for (int i = 0; i < n; ++i)
    {
        v.push_back(s[i]);
        dq.push_front(s[n - 1 - i]);

        int diff = 0;
        for (int j =0; j < v.size(); ++j)
        {
            if (v[j] != dq[j])
            {
                diff++;

                if (diff > 1)
                    break;
            }
        }

        if (diff == 1)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
}
