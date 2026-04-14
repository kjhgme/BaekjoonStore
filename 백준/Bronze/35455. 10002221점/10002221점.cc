#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        long long n, s;
        cin >> n >> s;

        s -= 10'000'000;

        if (s == n) cout << "Yes\n";
        else cout << "No\n";
    }
}