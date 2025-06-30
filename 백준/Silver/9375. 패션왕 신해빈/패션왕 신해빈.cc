#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--) {
        int m; cin >> m;
        unordered_map<string, int> cnt;

        for (int i = 0; i < m; ++i) {
            string name, type;
            cin >> name >> type;
            ++cnt[type];
        }

        long long res = 1;
        for (auto& p : cnt) res *= (p.second + 1);

        cout << res - 1 << '\n';
    }
}
