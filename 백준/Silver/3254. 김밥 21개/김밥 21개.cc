#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int winNum = 0;
int winTurn = 0;

void checkWin(vector<vector<int>> &v, int n)
{
    if (winNum != 0) return;

    int rows = v.size();
    int cols = v[0].size();

    for (int i = 0; i < rows; ++i)
    {
        int cnt = 0;

        for (int j = 0; j < cols; ++j)
        {
            if (v[i][j] == n)
                cnt++;
            else
                cnt = 0;

            if (cnt >= 4)
            {
                winNum = n;
                return;
            }
        }
    }

    for (int j = 0; j < cols; ++j)
    {
        int cnt = 0;

        for (int i = 0; i < rows; ++i)
        {
            if (v[i][j] == n)
                cnt++;
            else
                cnt = 0;

            if (cnt >= 4)
            {
                winNum = n;
                return;
            }
        }
    }

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            int cnt = 0;
            int x = i, y = j;
            while (x < rows && y < cols)
            {
                if (v[x][y] == n)
                    cnt++;
                else
                    cnt = 0;

                if (cnt >= 4)
                {
                    winNum = n;
                    return;
                }

                x++;
                y++;
            }
        }
    }

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            int cnt = 0;
            int x = i, y = j;

            while (x >= 0 && x < rows && y >= 0)
            {
                if (v[x][y] == n)
                    cnt++;
                else
                    cnt = 0;

                if (cnt >= 4)
                {
                    winNum = n;
                    return;
                }

                x++;
                y--;
            }
        }
    }
}

void setWinTurn(int n)
{
    if (winTurn != 0)
        return;

    if (winNum != 0)
        winTurn = n;
}

void placeGimbap(vector<vector<int>>& v, int n, int m)
{
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i][n] == 0)
        {
            v[i][n] = m;
            return;
        }
    }    
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<int>> v(6, vector<int>(7, 0));
    
    for (int i = 0; i < 21; ++i)
    {
        int s, j;
        cin >> s >> j;

        placeGimbap(v, s - 1, 1);
        placeGimbap(v, j - 1, 2);

        checkWin(v, 1);
        checkWin(v, 2);

        setWinTurn(i + 1);
    }

    if (winNum == 0)
        cout << "ss";
    else if (winNum == 1)
        cout << "sk " << winTurn;
    else
        cout << "ji " << winTurn;
}