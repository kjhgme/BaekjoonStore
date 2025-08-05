#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <map>
#include <string>

using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using t3 = tuple<int, int, int>;

#define all(x) (x).begin(), (x).end()

char transform(char l, char c, char r)
{
    if (l == c && c == r) return 'B';
    if (l != c && c != r && l != r) return 'B';

    map<char, int> freq;
    freq[l]++;
    freq[c]++;
    freq[r]++;

    char x = 0, y = 0;
    for (auto& p : freq) {
        if (p.second == 2) x = p.first;
        if (p.second == 1) y = p.first;
    }

    if ((x == 'R' && y == 'G') || (x == 'G' && y == 'B') || (x == 'B' && y == 'R')) return 'R';
    return 'G';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    for (int j = 0; j < k; ++j) {
        string next = s;

        for (int i = 0; i < n; ++i)
        {
            char l = s[(i - 1 + n) % n];
            char c = s[i];
            char r = s[(i + 1) % n];

            next[i] = transform(l, c, r);
        }

        s = next;
    }

    int red = 0, green = 0, blue = 0;
    for (char c : s) {
        if (c == 'R') red++;
        else if (c == 'G') green++;
        else if (c == 'B') blue++;
    }

    cout << red << " " << green << " " << blue << endl;
}