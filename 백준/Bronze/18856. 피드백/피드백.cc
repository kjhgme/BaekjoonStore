#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <math.h>

using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using t3 = tuple<int, int, int>;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fi first
#define se second

bool endp = false;

void isPrime(int n)
{
    int a = (int)sqrt(n);

    for (int i = 2; i <= a; ++i)
    {
        if (n % i == 0)
            isPrime(n + 1);
    }

    if(!endp)
        cout << n;
    
    endp = true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << n << "\n";

    for (int i = 0; i < n - 1; ++i)
    {
        cout << i + 1 << " ";
    }

    isPrime(n);
}