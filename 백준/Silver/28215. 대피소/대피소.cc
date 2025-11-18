#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int dist(pair<int, int> a, pair<int, int> b)
{
    return abs(a.first - b.first) + abs(a.second - b.second);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;

        v[i] = { x, y };
    }

    vector<int> ans;
    if (k == 1)
    {
        for (int i = 0; i < n; ++i)
        {
            int num = 0;

            for (int j = 0; j < n; ++j)
            {
                if (i == j) continue;
                
                num = max(num, dist(v[i], v[j]));
            }

            ans.push_back(num);
        }
    }
    else if (k == 2)
    {
        for (int a = 0; a < n; ++a)
            for (int b = a + 1; b < n; ++b) {

                int worst = 0;

                for (int i = 0; i < n; ++i) 
                {
                    int d = min(dist(v[i], v[a]), dist(v[i], v[b]));
                    worst = max(worst, d);
                }

                ans.push_back(worst);
            }
    }
    else if (k == 3) {
        for (int a = 0; a < n; ++a)
            for (int b = a + 1; b < n; ++b)
                for (int c = b + 1; c < n; ++c) {

                    int worst = 0;

                    for (int i = 0; i < n; ++i) 
                    {
                        int d = min({
                            dist(v[i], v[a]),
                            dist(v[i], v[b]),
                            dist(v[i], v[c])
                            });

                        worst = max(worst, d);
                    }

                    ans.push_back(worst);
                }
    }

    cout << *min_element(all(ans));
}