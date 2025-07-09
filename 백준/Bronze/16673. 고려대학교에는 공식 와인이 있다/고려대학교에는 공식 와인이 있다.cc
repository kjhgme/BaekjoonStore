#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int c, k, p;
    cin >> c >> k >> p;

    int sum = 0;

    for (int i = 1; i <= c; ++i)
    {
        sum += k * i + p * i * i;
    }

    cout << sum;
}