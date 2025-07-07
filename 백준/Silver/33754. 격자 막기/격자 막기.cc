#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    bool blocked = false;

    vector<int> vv1;
    vector<int> vv2;


    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            vv1.push_back(i);
        }
    }

    for (int j = 0; j < n; ++j)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            vv2.push_back(j);
        }
    }

    if (vv1.size() == 0 && vv2.size() == 0)
        cout << 2;
    else
    {
        for (int i = 0; i < vv2.size(); ++i)
        {
            auto iter = find(vv1.begin(), vv1.end(), vv2[i]);
            
            if (iter != vv1.end())
            {
                blocked = true;
                break;
            }

            auto iter2 = find(vv1.begin(), vv1.end(), vv2[i] - 1);
            if (iter2 != vv1.end())
            {
                blocked = true;
                break;
            }

            auto iter3 = find(vv1.begin(), vv1.end(), vv2[i] + 1);
            if (iter3 != vv1.end())
            {
                blocked = true;
                break;
            }
        }

        if (blocked)
            cout << 0;
        else
            cout << 1;
    }
}