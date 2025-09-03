#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char c;
    cin >> c;

    string love = "ILOVEYONSEI";

    int num = 0;

    for (int i = 0; i < love.size() - 1; ++i)
    {
        num += abs(love[i] - c);
        c = love[i];
    }

    cout << num + 4;
}