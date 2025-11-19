#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    int sum = 0;
    vector<int> v(3);
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;

        if (s == "1/4")
            v[0]++;
        else if (s == "1/2")
            v[1]++;
        else if (s == "3/4")
            v[2]++;
    }

    bool bHalf = false;

    sum += v[1] / 2;

    if (v[1] % 2 != 0)
        bHalf = true;

    if (v[0] == v[2])
        sum += v[0];
    else
    {
        sum += min(v[0], v[2]);

        if (v[2] > v[0])
            sum += v[2] - v[0];
        else
        {
            int temp = v[0] - v[2];

            if (bHalf && temp >= 2)
            {
                sum += 1;
                temp -= 2;
                sum += (temp - 1) / 4 + 1;
                bHalf = false;
            }
            else if (bHalf && temp < 2)
            {
                sum += 1;
                bHalf = false;
            }
            else
            {
                sum += (temp - 1) / 4 + 1;
            }
        }
    }

    if (bHalf) sum++;

    cout << sum;
}