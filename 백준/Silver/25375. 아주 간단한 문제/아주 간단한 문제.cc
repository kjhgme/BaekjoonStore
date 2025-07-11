#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        long long a, b;
        cin >> a >> b;

        if (b % a == 0 && b/ a >= 2)
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
    }
}