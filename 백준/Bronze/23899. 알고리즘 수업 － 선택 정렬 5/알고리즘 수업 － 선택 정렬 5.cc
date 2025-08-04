#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using t3 = tuple<int, int, int>;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fi first
#define se second

bool same = false;

void select_sort(vector<int>& v1, vector<int>& v2)
{
    if (v1 == v2)
    {
        same = true;
        return;
    }

    for (int j = 0; j < v1.size() - 1; ++j)
    {
        int last = v1.size() - 1 - j;
        int biggest = v1[last];
        int num = last;

        for (int i = last - 1; i >= 0; --i)
        {
            if (biggest < v1[i])
            {
                num = i;
                biggest = v1[i];
            }
        }

        if (num != last)
        {
            swap(v1[num], v1[last]);
        }

        if (v1 == v2)
        {
            same = true;
            return;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v1(n);
    vector<int> v2(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v1[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> v2[i];
    }

    select_sort(v1, v2);

    if (same)
        cout << 1;
    else
        cout << 0;
}