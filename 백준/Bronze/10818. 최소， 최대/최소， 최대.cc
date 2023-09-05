#include <iostream>
using namespace std;

int main()
{
    int N{};
    int x{};
    int min{ 1000000 }, max{ -1000000 };

    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        cin >> x;
        if (x > max)
            max = x;

        if (x < min)
            min = x;
    }

    cout << min << " " << max;
}