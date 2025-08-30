#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <set>

using namespace std;

#define all(x) (x).begin(), (x).end()

void twoDot(int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << "@";
    }
    for (int i = 0; i < n; ++i)
    {
        cout << "   ";
    }
    for (int i = 0; i < n; ++i)
    {
        cout << "@";
    }

    cout << "\n";
}

void line(int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << "@@@@@";
    }

    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i)
        twoDot(n);
    for (int i = 0; i < n; ++i)
        twoDot(n);
    for (int i = 0; i < n; ++i)
        line(n);
    for (int i = 0; i < n; ++i)
        twoDot(n);
    for (int i = 0; i < n; ++i)
        line(n);
}