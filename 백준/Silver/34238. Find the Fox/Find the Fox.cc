#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int cnt = 0;
vector<vector<char>> v;

void hori(int i, int j)
{
    if (i > 0 && i < v.size() - 1)
    {
        if (v[i - 1][j] == 'F' && v[i + 1][j] == 'X')
            cnt++;

        if (v[i - 1][j] == 'X' && v[i + 1][j] == 'F')
            cnt++;
    }
}

void verti(int i, int j)
{
    if (j > 0 && j < v[0].size())
    {
        if (v[i][j - 1] == 'F' && v[i][j + 1] == 'X')
            cnt++;

        if (v[i][j - 1] == 'X' && v[i][j + 1] == 'F')
            cnt++;
    }
}

void diag(int i, int j)
{
    if (i > 0 && i < v.size() - 1 && j > 0 && j < v[0].size() - 1)
    {
        if (v[i - 1][j - 1] == 'F' && v[i + 1][j + 1] == 'X')
            cnt++;
        if (v[i - 1][j - 1] == 'X' && v[i + 1][j + 1] == 'F')
            cnt++;

        if (v[i - 1][j + 1] == 'F' && v[i + 1][j - 1] == 'X')
            cnt++;
        if (v[i - 1][j + 1] == 'X' && v[i + 1][j - 1] == 'F')
            cnt++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    v.resize(n, vector<char>(m));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (v[i][j] == 'O')
            {
                hori(i ,j);
                verti(i ,j);
                diag(i, j);
            }
        }
    }

    cout << cnt;
}