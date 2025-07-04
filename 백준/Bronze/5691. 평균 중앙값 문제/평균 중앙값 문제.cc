#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;

    while (x != 0 && y != 0)
    {
        int n;

        if (x > y)
        {
            n = 2 * y - x;
        }
        else
        {
            n = 2 * x - y;
        }

        cout << n << endl;

        cin >> x >> y;
    }
}