#include <iostream>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x, y;
    cin >> x >> y;

    while (x != 0 && y != 0)
    {
        if (x > y)
            cout << "Yes\n";
        else
            cout << "No\n";

        cin >> x >> y;
    }
}