#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   
    int x[3], y[3];
    for (int i = 0; i < 3; ++i)
        cin >> x[i] >> y[i];

    int dx1 = x[1] - x[0], dy1 = y[1] - y[0];
    int dx2 = x[2] - x[0], dy2 = y[2] - y[0];

    int cross = dx1 * dy2 - dx2 * dy1;

    if (cross == 0)
        cout << "WHERE IS MY CHICKEN?\n";
    else
        cout << "WINNER WINNER CHICKEN DINNER!\n";
}