#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> graph;
vector<bool> visited;
int infected = 0;

void dfs(int node)
{
    visited[node] = true;
    for (int next : graph[node])
    {
        if (!visited[next])
        {
            infected++;
            dfs(next);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    graph.resize(n + 1);
    visited.resize(n + 1, false);

    for (int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1);

    cout << infected;
}