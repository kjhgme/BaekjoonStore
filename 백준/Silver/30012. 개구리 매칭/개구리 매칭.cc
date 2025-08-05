#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <climits>

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

    int S, N;
    cin >> S >> N;

    vector<int> E(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> E[i];
    }

    int K, L;
    cin >> K >> L;

    vector<pii> v(N);

    for (int i = 0; i < N; ++i)
    {
        int hp = 0;
        int distance = abs(E[i] - S);

        if (distance >= 2 * K)
        {
            distance -= 2 * K;

            hp += distance * L;
        }
        else
        {
            hp += 2 * K - distance;         
        }

        v[i] = make_pair(i, hp);
    }

    int max = INT_MAX;
    int num = INT_MAX;
    
    for (auto x : v)
    {
        if (x.second < max)
        {
            max = x.second;
            num = x.first + 1;
        }
    }

    cout << max << " " << num << "\n";
}