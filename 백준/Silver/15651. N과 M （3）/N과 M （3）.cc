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
    
    for (int i = 1; i <= n; ++i)
    {        
        arr[x] = i;
        isused[i] = true;
        func(x + 1);
        isused[i] = false;        
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    func(0);
}