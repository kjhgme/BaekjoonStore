#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, f;
    cin >> m >> f;

    while (m != 0 && f != 0)
    {
        cout << m + f << "\n";

        cin >> m >> f;
    }
}