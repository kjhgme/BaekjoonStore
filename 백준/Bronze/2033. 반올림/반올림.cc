#include <iostream>
// #include <bits/stdc++.h>
#include <vector>

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
    
    string s;
    cin >> s;

    for (int i = s.size() - 1; i > 0; --i)
    {
        if (s[i] >= '5')
            s[i - 1]++;
        s[i] = '0';
    }

    if (s[0] > '9')
    {
        s[0] = '0';
        s = '1' + s;
    }

    cout << s;
}
