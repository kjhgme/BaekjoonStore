#include <iostream>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 0; i < n; ++i)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int temp;

        if (a == b && b == c)
        {
            temp = 10000 + a * 1000;
        }
        else if (a == b && a != c)
        {
            temp = 1000 + a * 100;
        }
        else if (b == c && a != b)
        {
            temp = 1000 + b * 100;
        }
        else if (a == c && b != c)
        {
            temp = 1000 + a * 100;
        }
        else
        {
            if (a >= b && a >= c)
            {
                temp = a * 100;
            }
            else if (b >= a && b >= c)
            {
                temp = b * 100;
            }
            else if (c >= a && c >= b)
            {
                temp = c * 100;
            }
        }
        
        if (temp > sum)
            sum = temp;
    }

    cout << sum;
}