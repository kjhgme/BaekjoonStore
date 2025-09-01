#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <set>

using namespace std;

#define all(x) (x).begin(), (x).end()

int n, m;
int arr[10];
bool isused[10];

void NandM(int x)
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

    for (int i = 1; i <= n; ++i)
    {
        if (!isused[i])
        {
            arr[x] = i;
            isused[i] = true;
            NandM(x + 1);
            isused[i] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    NandM(0);
}