#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<pair<int, int>> edge;
vector<bool> dfsVisted;
vector<bool> bfsVisted;

void dfs(int v)
{
    if (dfsVisted[v-1] == true) return;

    cout << v << " ";

    dfsVisted[v - 1] = true;

    vector<int> nextNodes;

    for (const auto& e : edge)
    {
        if (e.first == v && dfsVisted[e.second - 1] == false)
        {
            nextNodes.push_back(e.second);
        }
        else if (e.second == v && dfsVisted[e.first - 1] == false)
        {
            nextNodes.push_back(e.first);
        }
    }

    sort(nextNodes.begin(), nextNodes.end());
    
    for(int node : nextNodes)
        dfs(node);
}

void bfs(int v)
{
    queue<int> que;

    if (bfsVisted[v - 1] == true) return;

    que.push(v);

    bfsVisted[v - 1] = true;

    while (!que.empty()) {
        int x = que.front();
        que.pop();
        cout << x << ' ';

        vector<int> vv;
        for (const auto& e : edge)
        {
            if (e.first == x && bfsVisted[e.second - 1] == false)
            {
                vv.push_back(e.second);
            }
            else if (e.second == x && bfsVisted[e.first - 1] == false)
            {
                vv.push_back(e.first);
            }
        }

        sort(vv.begin(), vv.end());

        for (int u : vv) {
            if (!bfsVisted[u - 1]) {
                bfsVisted[u - 1] = true;
                que.push(u);
            }
        }
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, v;
    cin >> n >> m >> v;

    edge.resize(m);

    for (int i = 0; i < m; ++i)
    {
        int x, y;
        cin >> x >> y;

        edge[i] = make_pair(x, y);
    }

    dfsVisted.resize(n, false);
    bfsVisted.resize(n, false);

    dfs(v);
    cout << "\n";
    bfs(v);
}