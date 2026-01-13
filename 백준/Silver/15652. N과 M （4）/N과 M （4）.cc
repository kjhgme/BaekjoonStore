#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <string>
#include <iomanip>

using namespace std;

int n, m;
int arr[10];
bool isused[10];

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
    
    int start = (x == 0) ? 1 : arr[x - 1];

    for (int i = start; i <= n; ++i)
    {        
        arr[x] = i;
        func(x + 1);
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    func(0);
}