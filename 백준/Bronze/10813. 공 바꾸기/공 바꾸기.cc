#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n{}, m{};
    int x{}, y{};
    int temp{};
    vector<int> v;


    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        v.push_back(i+1);
    }

    for (int i = 0; i < m; ++i) {
        cin >> x >> y;
        temp = v[x - 1];
        v[x - 1] = v[y - 1];
        v[y - 1] = temp;
    }

    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }
}