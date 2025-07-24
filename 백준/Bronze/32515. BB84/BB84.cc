#include <iostream>
#include <vector>
// #include <bits/stdc++.h>

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

    vector<string> v(4);
    for (int i = 0; i < 4; ++i)
    {
        cin >> v[i];
    }

    string s;
    for (int i = 0; i < n; ++i)
    {
        if (v[0][i] == v[2][i])
        {
            if (v[1][i] != v[3][i])
            {
                cout << "htg!";
                return 0;
            }
            else
                s += v[1][i];
        }
    }

    cout << s;
}