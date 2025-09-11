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
    
    int n;
    int a, b;

    cin >> n;
    cin >> a >> b;

    int sum = a / 2 + b;

    cout << min(n, sum);
}