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
    
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        int num;

        cin >> num;

        if (num == 1)
        {
            int l, r, k;
            cin >> l >> r >> k;
            
            int sum = 0;
            for (int j = l - 1; j < r; ++j)
            {
                if (v[j] == k)
                    sum++;
            }
            cout << sum << "\n";
        }
        else
        {
            int l, r;
            cin >> l >> r;

            for (int j = l - 1; j < r; ++j)
            {
                v[j] = 0;
            }
        }
    }
}