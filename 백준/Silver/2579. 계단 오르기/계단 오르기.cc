#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    vector<int> dp(n);

    if (n == 1)
    {
        cout << v[0];
    }
    else if (n == 2)
    {
        cout << v[0] + v[1];
    }
    else {
        dp[0] = v[0];
        dp[1] = v[0] + v[1];
        dp[2] = max(v[0] + v[2], v[1] + v[2]);

        for (int i = 3; i < n; ++i)
        {
            dp[i] = max(dp[i - 2], dp[i - 3] + v[i - 1]) + v[i];
        }

        cout << dp[n - 1];
    }
}