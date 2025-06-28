#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char study[1001][1001]{};
    int n, t;
    cin >> n >> t;

    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;

        for (int j = 0; j < a; ++j)
        {
            int x, y;
            cin >> x >> y;

            for (int q = x; q < y; ++q)
            {
                study[i][q] = 'o';
            }
        }
    }

    int biggest = 0;
    int time = -1;

    for (int i = 0; i < 1001 - t; ++i)
    {
        int sum = 0;

        for (int j = 0; j < n; ++j)
        {
            for (int k = 0; k < t; ++k)
            {
                if (study[j][i + k] == 'o')
                    sum++;
            }
        }

        if (sum > biggest)
        {
            biggest = sum;
            time = i;
        }
    }

    cout << time << " " << time + t;
}