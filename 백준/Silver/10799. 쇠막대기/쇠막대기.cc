#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <stack>

using namespace std;

#define all(x) (x).begin(), (x).end()


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<pair<int, int>> pipe;
    vector<float> razer;

    stack<int> start;

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '(' && s[i + 1] == ')')
        {
            razer.push_back(i + 0.5);
        }
        else if (s[i] == '(' && s[i + 1] != ')')
        {
            start.push(i);
        }
        else if (s[i - 1] != '(' && s[i] == ')')
        {
            int point = start.top();
            start.pop();

            pipe.push_back(make_pair(point, i));
        }
    }

    int cnt = pipe.size();

    for (int i = 0; i < pipe.size(); ++i)
    {
        for (auto r : razer)
        {
            if (pipe[i].first < r && r < pipe[i].second)
                cnt++;
        }
    }

    cout << cnt;
}