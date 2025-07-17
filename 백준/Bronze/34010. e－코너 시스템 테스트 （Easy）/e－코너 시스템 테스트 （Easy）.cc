#include <iostream>
#include <string>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    int cnt = 0;
    
    while (cnt <= 2 * n - 1)
    {
        string s;
        getline(cin, s);

        cnt++;
    }

    cout << 2 * n - 2 << " " << 2 * n - 3;
}
