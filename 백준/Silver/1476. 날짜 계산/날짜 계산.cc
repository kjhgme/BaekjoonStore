#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <queue>

using namespace std;

#define all(x) (x).begin(), (x).end()


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int e, s, m;
    cin >> e >> s >> m;

    int a = 1, b = 1, c = 1;

    int time = 1;
    while (!(e == a && s == b && m == c))
    {
        time++;

        a++;
        b++;
        c++;

        if (a > 15)
            a = 1;

        if (b > 28)
            b = 1;

        if (c > 19)
            c = 1;
    }

    cout << time;
}