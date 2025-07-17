#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c;
    cin >> a >> b >> c;

    int temp1 = a * b;
    int temp2 = a * c;
    int temp3 = b * c;
    int temp4 = a * b * c;
        
    vector<int> temps = { a, b, c, temp1, temp2, temp3, temp4 };
    vector<int> oddTemps;

    int best = -1;

    for (int val : temps) {
        if (best == -1) {
            best = val;
        }
        else if (val % 2 != 0 && best % 2 == 0) {
            best = val;
        }
        else if ((val % 2 == best % 2) && val > best) {
            best = val;
        }
    }
    
    cout << best;
}