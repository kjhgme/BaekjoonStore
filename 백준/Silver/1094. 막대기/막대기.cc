#include <iostream>
using namespace std;

int main()
{
    int stick{};
        
    cin >> stick;

    int ans = 0;
    while (stick > 0) {
        if (stick % 2 == 1) {
            ans++;
        }
        stick /= 2;
    }

    cout << ans;
}