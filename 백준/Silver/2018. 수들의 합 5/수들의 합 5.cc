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

    int cnt = 0; 
    int left = 1;
    int right = 1;
    int sum = 0;

    while (right <= n) 
    {
        sum += right;
        while (sum > n) 
        {
            sum -= left;
            left++;
        }

        if (sum == n) 
        {
            cnt++;
        }

        right++;
    }

    cout << cnt;
}