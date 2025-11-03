#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <iomanip>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double m, a, b;
    cin >> m >> a >> b;

    while (m != 0 && a != 0 && b != 0)
    {
        double t1 = m / a;
        double t2 = m / b;

        double diff = fabs(t1 - t2) * 3600;
        int seconds = static_cast<int>(round(diff));

        int hour = seconds / 3600;
        seconds %= 3600;
        int min = seconds / 60;
        int sec = seconds % 60;

        cout << hour << ":"
            << setw(2) << setfill('0') << min << ":"
            << setw(2) << setfill('0') << sec << "\n";

        cin >> m >> a >> b;
    }
}