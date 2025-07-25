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
    
    if (n == 1 || n == 2 || n == 4)
    {
        cout << "0\n";
        return 0;
    }

    int count = 0;

    for (int a = 1; a <= n; ++a) {
        for (int b = a; b <= n - a - b; ++b) {
            int c = n - a - b;
            if (b <= c && c < a + b) {
                count++;
            }
        }
    }

    cout << count;
}