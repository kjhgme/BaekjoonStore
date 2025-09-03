#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

vector<int> v(9);
vector<int> vv;
bool found = false;

void dfs(int start, int depth, int sum) {
    if (depth == 7) {
        if (sum == 100) {
            sort(vv.begin(), vv.end());

            for (int x : vv) cout << x << "\n";
            found = true;
        }
        return;
    }

    if (found) return;

    for (int i = start; i < 9; ++i) {
        vv.push_back(v[i]);
        dfs(i + 1, depth + 1, sum + v[i]);
        vv.pop_back();
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    for (int i = 0; i < 9; ++i)
    {
        cin >> v[i];
    }

    dfs(0, 0, 0);
}