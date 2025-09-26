#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <set>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (n % 2 == 0)
        cout << "SK";
    else
        cout << "CY";
}