#include <iostream>
#include <vector>
using namespace std;

int num;
int fibo[20];

void func(int n)
{
    if (n >= 2)
    {
        fibo[n] = fibo[n - 1] + fibo[n - 2];
    }

    if (num == n)
    {
        cout << fibo[n];
        return;
    }

    func(n + 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    fibo[0] = 0;
    fibo[1] = 1;

    cin >> num;

    func(0);
}