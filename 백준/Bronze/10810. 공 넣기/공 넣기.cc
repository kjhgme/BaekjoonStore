#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n{}, m{};
    int i{}, j{}, k{};
    vector<int> v;

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        v.push_back(0);
    }

    for (int x = 0; x < m; ++x) {
        cin >> i >> j >> k;

        for (int y = i; y <= j; ++y) {
            v[y-1] = k;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }
}