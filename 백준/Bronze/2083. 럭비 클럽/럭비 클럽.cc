#include <iostream>
#include <string>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    int x, y;
    cin >> s >> x >> y;

    while(s != "#")
    {
        if (x > 17 || y >= 80)
            cout << s << " Senior\n";
        else
            cout << s << " Junior\n";

        cin >> s >> x >> y;
    }
}