#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int h, w;
    cin >> h >> w;

    if (h <= w)
    {
        cout << h * 100 / 2;
    }
    else
        cout << w * 100 / 2;
}