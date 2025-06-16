#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int sum = 0;
    int missingIndex = -1;

    string s;
    cin >> s;

    for (int i = 0; i < 13; ++i)
    {
        if (isdigit(s[i]))
        {
            int num = s[i] - '0';

            if (i % 2 == 0)
            {
                sum += num;
            }
            else
                sum += 3 * num;
        }
        else
            missingIndex = i;
    }

    for (int x = 0; x <= 9; ++x)
    {
        int tempSum = sum + ((missingIndex % 2 == 0) ? x : 3 * x);

        if ((tempSum) % 10 == 0)
        {
            cout << x;
            break;
        }
    }
}
