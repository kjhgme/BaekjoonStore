#include <iostream>
#include <unordered_map>
using namespace std;

long long dp[100] = {};

long long padoban(int n)
{
    dp[0] = 1; dp[1] = 1; dp[2] = 1;

    if (n <= 3)
        return dp[n - 1];
    else
    {
        for (int i = 3; i < n; ++i)
        {
            dp[i] = dp[i - 2] + dp[i - 3];
        }
    }

    return dp[n - 1];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int x;

        cin >> x;

        cout << padoban(x) << "\n";        
    }
}