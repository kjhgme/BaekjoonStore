#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int temp[10];
bool visited[10];
vector<int>v;

void func(int cnt, int start)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; ++i)
        {
            cout << temp[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = start; i < n; i++)
    {
        temp[cnt] = v[i];
        func(cnt + 1, i + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    v.resize(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    func(0, 0);
}