#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<int> v;

    int k;
    cin >> k;

    for (int i = 0; i < k; ++i)
    {
        int n, v;
        cin >> n >> v;

        vector<pair<int, int>> ads(n + 1);
        for (int j = 1; j <= n; ++j) {
            int d, p;
            cin >> d >> p;
            ads[j] = { d, p };
        }

        int total = 0;

        for (int j = 0; j < v; ++j) {
            int a1, a2, c;
            cin >> a1 >> a2 >> c;

            if (ads[a1].first == 1) total += ads[a1].second;
            if (ads[a2].first == 1) total += ads[a2].second;

            if (c == 1 && ads[a1].first == 0) {
                total += ads[a1].second;
            }
            else if (c == 2 && ads[a2].first == 0) {
                total += ads[a2].second;
            }
        }

        cout << "Data Set " << i+1 << ":\n";
        cout << total << "\n\n";
    }
}