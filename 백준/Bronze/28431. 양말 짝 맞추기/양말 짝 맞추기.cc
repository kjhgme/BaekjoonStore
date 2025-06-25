#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<int> v;

    for (int i = 0; i < 5; ++i)
    {
        int n;
        cin >> n;

        auto iter = find(v.begin(), v.end(), n);

        if (iter == v.end())
            v.push_back(n);
        else
            v.erase(iter);
    }

    cout << v[0];
}