#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;

        vector<string> v1(x);
        vector<string> v2(x);
        vector<string> v3(x);

        for (int j = 0; j < x; ++j)
        {
            cin >> v1[j];
        }
        for (int j = 0; j < x; ++j)
        {
            cin >> v2[j];
        }
        for (int j = 0; j < x; ++j)
        {
            cin >> v3[j];
        }

        vector<string> v4(x);

        for (int j = 0; j < x; ++j)
        {
            for (int k = 0; k < x; ++k)
            {
                if (v2[j] == v1[k])
                {
                    v4[k] = v3[j];
                    break;
                }                
            }
        }

        for(int j = 0; j < x; ++j)
        {
            cout << v4[j] << " ";
        }
        cout << endl;
    }
}