#include <iostream>
using namespace std;

int main()
{
    int x{}, y{};
    cin >> x >> y;
    
    int n{}, m{};
    n = (x / 100) + (x / 10 % 10 * 10) + (x % 10 * 100);
    m = (y / 100) + (y / 10 % 10 * 10) + (y % 10 * 100);
    
    if(n >= m)
        cout << n;
    else
        cout << m;
}