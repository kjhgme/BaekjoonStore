#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    vector<int> v(6);
    int t, p;

    cin >> n;

    for (int i = 0; i < 6; ++i)
    {
        cin >> v[i];
    }

    cin >> t >> p;

    int cnt = 0;

    for (int i = 0; i < 6; ++i)
    {
        cnt += v[i] / t;

        if(v[i] % t != 0)
            cnt++;
    }
    cout << cnt << endl;
    cout << n / p << " " << n % p;
}