#include <iostream>
#include <vector>
// #include <bits/stdc++.h>

using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using t3 = tuple<int, int, int>;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fi first
#define se second

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c;
    cin >> a >> b >> c;

    int d;
    cin >> d;

    int hour = d / 3600;
    int min = (d % 3600) / 60;
    int sec = (d % 3600) % 60;

    hour += a;
    min += b;
    sec += c;

    while(sec >= 60)
    {
        sec -= 60;
        min += 1;
    }

    while (min >= 60)
    {
        min -= 60;
        hour += 1;
    }

    while (hour >= 24)
    {
        hour -= 24;
    }

    cout << hour << " " << min << " " << sec;
}