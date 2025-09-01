#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

string s;
char arr[7];
bool isused[7];
vector<string> vs;

void func(int depth)
{
    if (depth == s.size()) {
        arr[depth] = '\0';
        if (string(arr) > s) {
            vs.push_back(arr);
        }
        return;
    }

    for (int i = 0; i < s.size(); ++i)
    {
        if (!isused[i])
        {
            arr[depth] = s[i];
            isused[i] = true;
            func(depth + 1);
            isused[i] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> s;

    func(0);

    if (!vs.empty())
    {
        sort(all(vs));
        cout << vs[0];
    }
    else
        cout << 0;

}