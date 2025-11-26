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

    vector<int>road(n - 1);
    vector<int>city(n);

    for (int i = 0; i < n - 1; ++i)
    {
        cin >> road[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> city[i];
    }

    int sum = 0;
    for (int i = city.size() - 1; i > 0; --i)
    {
        int x = *min_element(city.begin(), city.begin() + i);

        sum += x * road[i - 1];
    }

    cout << sum;
}