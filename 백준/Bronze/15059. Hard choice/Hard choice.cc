#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
      
    int a, b, c;
    int x, y, z;

    cin >> a >> b >> c;
    cin >> x >> y >> z;
    
    int sum = 0;
    if (x - a > 0)
    {
        sum += x - a;
    }
    if (y - b > 0)
    {
        sum += y - b;
    }
    if (z - c > 0)
    {
        sum += z - c;
    }

    cout << sum;
}