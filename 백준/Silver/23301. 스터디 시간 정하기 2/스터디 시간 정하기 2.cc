#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, t;
    cin >> n >> t;

    int diff[1001]{};

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;

        while (a--) {
            int x, y; cin >> x >> y;
            diff[x]++;
            diff[y]--;
        }
    }

    int total[1001]{};
    int cur = 0;

    for (int h = 0; h < 1001; ++h) {
        cur += diff[h];
        total[h] = cur;
    }

    int bestSum = 0, bestStart = 0;
    int window = 0;

    for (int h = 0; h < t; ++h)
        window += total[h];

    bestSum = window;

    for (int start = 1; start <= 1001 - t; ++start) {
        window += total[start + t - 1] - total[start - 1];

        if (window > bestSum) {
            bestSum = window;
            bestStart = start;
        }
    }

    cout << bestStart << ' ' << bestStart + t;
}