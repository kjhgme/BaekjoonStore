#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <list>
#include <unordered_map>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, l;
    cin >> k >> l;

    list<string> sl; 
    unordered_map<string, list<string>::iterator> pos;

    for (int i = 0; i < l; ++i)
    {
        string x;
        cin >> x;

        auto it = pos.find(x);

        if (it != pos.end()) {
            sl.erase(it->second);
            pos.erase(it);
        }

        sl.push_back(x);
        pos[x] = --sl.end();
    }

    int count = 0;
    for (auto iter = sl.begin(); iter != sl.end(); ++iter)
    {
        cout << *iter << "\n";
        if (++count == k) break;
    }
} 