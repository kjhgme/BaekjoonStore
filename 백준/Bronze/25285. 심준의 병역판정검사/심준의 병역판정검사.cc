#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int a, b;

        cin >> a >> b;

        float bmi = float(b) / ((float(a) / 100.0) * (float(a) / 100.0));

        if (a <= 140)
            cout << 6 << "\n";
        else if (a > 140 && a < 146)
            cout << 5 << "\n";
        else if (a >= 146 && a < 159)
            cout << 4 << "\n";
        else if (a >= 159 && a < 161)
        {
            if (16 <= bmi && bmi < 35)
                cout << 3 << "\n";
            else if (bmi < 16 || 35 <= bmi)
                cout << 4 << "\n";
        }
        else if (161 <= a && a < 204)
        {
            if (20 <= bmi && bmi < 25)
                cout << 1 << "\n";
            else if ((18.5 <= bmi && bmi < 20) || (25 <= bmi && bmi < 30))
                cout << 2 << "\n";
            else if ((16 <= bmi && bmi < 18.5) || (30 <= bmi && bmi < 35))
                cout << 3 << "\n";
            else if (bmi < 16 || 35 <= bmi)
                cout << 4 << "\n";
        }
        else if (204 <= a)
            cout << 4 << "\n";
    }
}