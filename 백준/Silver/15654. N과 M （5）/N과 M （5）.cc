#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int n, m;
int arr[10];
bool isused[10];

vector<int> v;

void func(int x)
{
    if (x == m)
    {
        for (int i = 0; i < m; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    for (int i = 0; i < n; ++i)
    {
        if (!isused[i])
        {
            arr[x] = v[i];
            isused[i] = true;
            func(x + 1);
            isused[i] = false;
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;

        v.push_back(x);
    }

    sort(v.begin(), v.end());

    func(0);
}