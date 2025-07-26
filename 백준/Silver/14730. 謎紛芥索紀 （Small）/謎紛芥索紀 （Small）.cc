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
    
    int sum = 0;

    for (int i = 0; i < n; ++i)
    {
        int c, k;
        cin >> c >> k;

        sum += c * k;
    }

    cout << sum;
}