#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int size = sqrt(s.size());

    while (size > 0 && s.size() % size != 0)
    {
        size--;
    }

    int size2 = s.size() / size;
    vector<vector<char>> mat(size, vector<char>(size2, ' '));

    int idx = 0;
    for (int j = 0; j < size2; ++j)
    {
        for (int i = 0; i < size; ++i)
        {
            mat[i][j] = s[idx++];
        }
    }

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size2; ++j)
        {
            cout << mat[i][j];
        }
    }
}