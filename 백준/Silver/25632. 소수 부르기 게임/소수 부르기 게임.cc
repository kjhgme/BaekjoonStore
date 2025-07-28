#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
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

vector<bool> ytv;
vector<bool> yjv;

void isPrime(vector<bool> &v, int n, int m) {
	
	v.resize(m + 1, true);

    v[0] = false;
    v[1] = false;

    for (int i = 2; i * i <= m; i++) {
        if (v[i]) {
            for (int k = i * i; k <= m; k += i) {
                v[k] = false;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        v[i] = false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    int c, d;

    cin >> a >> b;
    cin >> c >> d;

	isPrime(ytv, a, b);
	isPrime(yjv, c, d);

    vector<int> v1;
    vector<int> v2;

    for (int i = a; i <= b; ++i)
    {
        if (ytv[i]) v1.push_back(i);
    }

    for (int i = c; i <= d; ++i)
    {
        if (yjv[i]) v2.push_back(i);
    }

    while (true)
    {
        bool yty = false;
        bool yjy = false;

        for (auto x : v2)
        {
            auto iter = find(v1.begin(), v1.end(), x);

            if (iter != v1.end())
            {
                yty = true;
                v1.erase(iter);

                auto iter2 = find(v2.begin(), v2.end(), x);
                v2.erase(iter2);

                break;
            }
        }

        if (!yty && !v1.empty())
        {
            yty = true;
            v1.erase(v1.end() - 1);
        }

        if (!yty)
        {
            cout << "yj";

            return 0;
        }

        for (auto x : v1)
        {
            auto iter = find(v2.begin(), v2.end(), x);

            if (iter != v2.end())
            {
                yjy = true;
                v2.erase(iter);

                auto iter2 = find(v1.begin(), v1.end(), x);
                v1.erase(iter2);

                break;
            }
        }

        if (!yjy && !v2.empty())
        {
            v2.erase(v2.end() - 1);
            yjy = true;
        }

        if (!yjy)
        {
            cout << "yt";

            return 0;
        }
    }
}