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
    
    int a, b, c;
    cin >> a >> b >> c;

    if (a <= b && a <= c)
    {
        if (b <= c)              
            cout << a << " " << b << " " << c;        
        else
            cout << a << " " << c << " " << b;
    }
    else if (b <= a && b <= c)
    {
        if (a <= c)
            cout << b << " " << a << " " << c;
        else
            cout << b << " " << c << " " << a;
    }
    else
    {
        if (a <= b)
            cout << c << " " << a << " " << b;
        else
            cout << c << " " << b << " " << a;
    }
}