#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

#define all(x) (x).begin(), (x).end()


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> pairs = {
        {0, 1}, {0, 2}, {0, 3}, {0, 4},
        {1, 2}, {1, 3}, {1, 4},
        {2, 3}, {2, 4},
        {3, 4}
    };

    vector<vector<int>> students(n, vector<int>(5));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> students[i][j];
        }
    }


    int maxCount = -1;
    pair<int, int> bestPair = { 0, 1 };

    for (auto p : pairs) {
        int d1 = p.first;
        int d2 = p.second;

        int count = 0;
        for (int i = 0; i < n; ++i) {
            if (students[i][d1] == 1 && students[i][d2] == 1) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            bestPair = { d1, d2 };
        }
    }

    cout << maxCount << "\n";
    vector<int> result(5, 0);
    result[bestPair.first] = 1;
    result[bestPair.second] = 1;

    for (int i = 0; i < 5; ++i) {
        cout << result[i] << " ";
    }
    cout << "\n";

}