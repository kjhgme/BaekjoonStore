#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <queue>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    if (n < 3)
    {
        cout << 0;
        return 0;
    }
    
    vector<int>v2 = v;

    long long cnt1 = 0;
    long long cnt2 = 0;

    queue<int> temp;

    for (int i = 0; i < n; ++i)
    {
        if (v[i] % 2 == 1)
        {
            temp.push(i);
        }
        else
        {
            if (!(empty(temp)))
            {
                int x = temp.front();
                cnt1 += (i - x);
                swap(v[i], v[x]);
                temp.pop();
                temp.push(i);
            }
        }
    }

    queue<int> temp2;

    for (int i = 0; i < n; ++i)
    {
        if (v2[i] % 2 == 0)
        {
            temp2.push(i);           
        }
        else
        {
            if (!temp2.empty())
            {
                int x = temp2.front();
                cnt2 += (i - x);
                swap(v2[i], v2[x]);
                temp2.pop();
                temp2.push(i);
            }
        }
    }    

    cout << min(cnt1, cnt2);
}