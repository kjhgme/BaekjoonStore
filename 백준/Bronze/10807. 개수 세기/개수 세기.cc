#include <iostream>
using namespace std;

int main()
{
    int N{};
    int v{};
    int x[100];
    int cnt{};

    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        cin >> x[i];
    }

    cin >> v;

    for (int i = 0; i < N; ++i)
    {
        if (x[i] == v)
            cnt++;
    }

    cout << cnt;
}