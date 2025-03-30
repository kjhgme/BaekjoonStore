#include <iostream>
#include <set>
using namespace std;

void solve() {
    int n;
    long long a, b;
    cin >> n >> a >> b;
    
    multiset<long long> gold;
    gold.insert(1LL << n);
    
    int days = 0;
    while (!gold.empty()) {
        long long largest = *gold.rbegin();
        gold.erase(prev(gold.end()));
        
        if (a >= largest) a -= largest;
        else if (b >= largest) b -= largest;
        else {
            gold.insert(largest / 2);
            gold.insert(largest / 2);
            days++;
        }
        
        if (a == 0 && b == 0) break;
    }
    
    cout << days << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) solve();
}