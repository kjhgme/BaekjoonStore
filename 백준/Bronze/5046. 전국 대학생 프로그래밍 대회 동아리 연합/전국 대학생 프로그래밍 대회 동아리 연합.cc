#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, b, h, w;
    cin >> n >> b >> h >> w;

    int money = b + 1;

    for (int i = 0; i < h; ++i)
    {
        int p;
        cin >> p;

        for (int j = 0; j < w; ++j)
        {
            int a;
            cin >> a;

            if (n <= a)
            {
                if (money > p * n)
                {
                    money = p * n;
                }
            }
        }
    }

    if (money > b)
        cout << "stay home\n";
    else
        cout << money << "\n";
}