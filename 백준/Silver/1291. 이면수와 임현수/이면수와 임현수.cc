#include <iostream>
#include <vector>
// #include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int countPrimeTypes(int n)
{
    int cnt = 0;

    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            cnt++;
            while (n % i == 0)
                n /= i;
        }
    }

    if (n > 1)
        cnt++;

    return cnt;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    bool 이면수 = false;
    bool 임현수 = false;

    int temp = n;
    int sum = 0;

    while (temp > 0)
    {        
        sum += temp % 10;
        temp = temp / 10;
    }

    if (n > 4 && n != 5 && sum % 2 == 1) 이면수 = true;

    int prime = countPrimeTypes(n);

    if (n == 4 || n == 2 || (prime % 2 == 0 && prime != 0)) 임현수 = true;

    if (이면수 && 임현수) cout << 4;
    else if (이면수) cout << 1;
    else if (임현수) cout << 2;
    else cout << 3;
}