#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<vector<int>> v;
vector<vector<bool>> visited;
bool bReach = false;

void search(int x, int y)
{
    if (x < 0 || x >= m || y < 0 || y >= n) return;

    if (v[x][y] != 1 || visited[x][y]) return;

    visited[x][y] = true;

    if (x == m - 1 && y == n - 1)
    {
        bReach = true;
        return;
    }

    search(x + 1, y);
    search(x, y + 1);
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;

    v.resize(m, vector<int>(n));
    visited.resize(m, vector<bool>(n, false));

    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> v[i][j];
        }
    }

    search(0, 0);

    if (bReach)
        cout << "Yes\n";
    else
        cout << "No\n";
}