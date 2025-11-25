#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <queue>

using namespace std;

#define all(x) (x).begin(), (x).end()


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, w, l;
    cin >> n >> w >> l; // 트럭, 다리 길이, 하중

    vector<int> v(n);
    queue<int> q;

    int weight = 0;
    int time = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    
    for (int i = 0; i < n; )
    {
        time++;

        if (q.size() == w)
        {
            weight -= q.front();
            q.pop();
        }

        if (weight + v[i] <= l)
        {
            q.push(v[i]);
            weight += v[i];
            i++;
        }
        else
        {
            q.push(0);
        }
    }

    cout << time + w;
}