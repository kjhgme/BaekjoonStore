#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    
    vector<vector<int>> graph(n + 1);

    for (auto& e : edge) {
        int a = e[0];
        int b = e[1];

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<int> dist(n + 1, -1);
    queue<int> q;
    q.push(1);
    dist[1] = 0;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        for (int next : graph[cur]) {
            if (dist[next] == -1) {
                dist[next] = dist[cur] + 1;
                q.push(next);
            }
        }
    }

    int maxDist = *max_element(dist.begin(), dist.end());

    answer = count(dist.begin(), dist.end(), maxDist);
    
    return answer;
}