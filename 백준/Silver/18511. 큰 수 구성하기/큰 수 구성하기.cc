#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <math.h>
#include <algorithm>

using namespace std;

#define all(x) (x).begin(), (x).end()

int N, M;
vector<int> K;
int answer = 0;

void dfs(int cur) {
    if (cur > N) return;

    answer = max(answer, cur);

    for (int d : K) {
        dfs(cur * 10 + d);
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    K.resize(M);

    for (int i = 0; i < M; i++) {
        cin >> K[i];
    }

    dfs(0);

    cout << answer << '\n';
    return 0;
}