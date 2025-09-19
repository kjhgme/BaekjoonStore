#include <iostream>
#include <vector>

using namespace std;

long long combination(int n)
{
    long long res = 1;

    for (int i = n; i > 1; i -= 2)
    {
        res *= (i - 1);
    }

    return res;
}

int main()
{
    int n;
    cin >> n;

    cout << combination(n);
}