#include <iostream>
#include <vector>
using namespace std;

int n, m;
int arr[10];

void NandM(int x, int start)
{
    if (x == m)
    {
        for (int i = 0; i < m; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = start; i <= n; ++i)
    {
        arr[x] = i;
        NandM(x + 1, i + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    NandM(0, 1);
}