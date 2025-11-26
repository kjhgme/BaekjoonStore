#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define all(x) (x).begin(), (x).end()


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long>road(n - 1);
    vector<long long>city(n);

    for (int i = 0; i < n - 1; ++i)
    {
        cin >> road[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> city[i];
    }

    long long sum = 0;
    long long temp = city[0];
    for (int i = 0; i < n - 1; ++i)
    {
        if (city[i] < temp)
            temp = city[i];

        sum += temp * road[i];
    }

    cout << sum;
}