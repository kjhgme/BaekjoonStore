#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v(9);

    for (int i = 0; i < 9; ++i)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < 9; ++i) {
        for (int j = i + 1; j < 9; ++j) {
            for (int k = j + 1; k < 9; ++k) {
                for (int l = k + 1; l < 9; ++l) {
                    for (int m = l + 1; m < 9; ++m) {
                        for (int n = m + 1; n < 9; ++n) {
                            for (int o = n + 1; o < 9; ++o) {
                                int sum = v[i] + v[j] + v[k] + v[l] + v[m] + v[n] + v[o];

                                if (sum == 100) {
                                    cout << v[i] << "\n"
                                        << v[j] << "\n"
                                        << v[k] << "\n"
                                        << v[l] << "\n"
                                        << v[m] << "\n"
                                        << v[n] << "\n"
                                        << v[o] << "\n";
                                    return 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}