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

    string n;
    cin >> n;

    int left = 0;
    int right = 0;

    for (int i = 0; i < n.size() / 2; ++i)
    {
        left += n[i] - '0';
    }

    for (int i = n.size() / 2; i < n.size(); ++i)
    {
        right += n[i] - '0';
    }

    if (left == right)
        cout << "LUCKY";
    else
        cout << "READY";
}