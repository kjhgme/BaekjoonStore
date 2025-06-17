#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    int cnt = 0;

    while (k != 0)
    {
        for (int i = v.size() - 1; i >= 0; --i)
        {
            while (k >= v[i])
            {
                cnt++;
                k -= v[i];
            }
        }
    }

    cout << cnt;
}