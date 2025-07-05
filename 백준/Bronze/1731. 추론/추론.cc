#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    if (v[2] - v[1] == v[1] - v[0])
    {
        cout << v[v.size() - 1] + v[1] - v[0];
    }
    else
    {
        int a = v[1] / v[0];

        cout << v[v.size() - 1] * a;
    }
}