#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <set>
#include <string>

using namespace std;

#define all(x) (x).begin(), (x).end()

vector<vector<int>> v;
int num0 = 0;
int num1 = 0;

bool checkSame(int x, int y, int size)
{
    int value = v[x][y];

    for (int i = x; i < x + size; ++i)
        for (int j = y; j < y + size; ++j)
            if (v[i][j] != value)
                return false;

    return true;
}

void func(int x, int y, int size)
{
    if (checkSame(x, y, size))
    {
        if (v[x][y] == 0) num0++;
        else num1++;
        return;
    }
    int half = size / 2;

    func(x, y, half);
    func(x, y + half, half);
    func(x + half, y, half);
    func(x + half, y + half, half);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    v.assign(n, vector<int>(n));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> v[i][j];
        }
    }

    func(0, 0, n);

    cout << num0 << "\n" << num1;
}