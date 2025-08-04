#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <set>
#include <string>

using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using t3 = tuple<int, int, int>;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fi first
#define se second

bool isAlmostFriends(set<int>& aSet, vector<int>& B) {
    for (int i = 0; i < (int)B.size() - 1; ++i) {
        if (B[i] < 9 && B[i + 1] > 0) {
            B[i]++;
            B[i + 1]--;

            if (aSet == set<int>(B.begin(), B.end())) return true;

            B[i]--;
            B[i + 1]++;
        }

        if (i == 0 && B[i] <= 1) continue;
        if (B[i] > 0 && B[i + 1] < 9) {
            B[i]--;
            B[i + 1]++;

            if (aSet == set<int>(B.begin(), B.end())) return true;

            B[i]++;
            B[i + 1]--;
        }
    }

    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int t = 0; t < 3; ++t) {
        string s1, s2;
        cin >> s1 >> s2;

        vector<int> A, B;
        for (char ch : s1) A.push_back(ch - '0');
        for (char ch : s2) B.push_back(ch - '0');

        set<int> aSet(A.begin(), A.end());
        set<int> bSet(B.begin(), B.end());

        if (aSet == bSet) {
            cout << "friends\n";
        }
        else {
            bool result = isAlmostFriends(aSet, B) || isAlmostFriends(bSet, A);
            cout << (result ? "almost friends\n" : "nothing\n");
        }
    }
}