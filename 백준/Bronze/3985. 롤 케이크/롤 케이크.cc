#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, n;
    cin >> l;
    cin >> n;

    vector<bool> cakes(l);
    vector<int> want(n);
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        int p, k;
        cin >> p >> k;

        want[i] = k - p;

        int cnt = 0;
        for (int j = p - 1; j < k; ++j)
        {
            if (!cakes[j])
            {
                cakes[j] = true;
                cnt++;
            }
        }

        v[i] = cnt;
    }

    cout << max_element(want.begin(), want.end()) - want.begin() + 1 << "\n";
    cout << max_element(v.begin(), v.end()) - v.begin() + 1;
}