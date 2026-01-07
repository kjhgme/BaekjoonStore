#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <queue>
#include <stack>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        double num;
        cin >> num;

        cout << fixed;
        cout.precision(2);
        cout << '$' << num * 0.8 << "\n";
    }
}