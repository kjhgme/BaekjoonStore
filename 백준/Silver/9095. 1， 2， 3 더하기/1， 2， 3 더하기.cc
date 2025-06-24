#include <iostream>
#include <vector>

using namespace std;

int dp[10001];

void init_dp(int max_a) {
    dp[0] = 1;

    for (int i = 1; i <= max_a; ++i) {
        if (i - 1 >= 0) dp[i] += dp[i - 1];
        if (i - 2 >= 0) dp[i] += dp[i - 2];
        if (i - 3 >= 0) dp[i] += dp[i - 3];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;

    cin >> n;

    vector<int> inputs(n);
    int max_val = 0;

    for (int i = 0; i < n; ++i) {
        cin >> inputs[i];
        max_val = max(max_val, inputs[i]);
    }

    init_dp(max_val);

    for (int i = 0; i < n; ++i) {
        cout << dp[inputs[i]] << "\n";
    }
}