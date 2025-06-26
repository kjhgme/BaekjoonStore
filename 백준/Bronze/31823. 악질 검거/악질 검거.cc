#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   
    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    vector<string> v2(n);

    for (int i = 0; i < n; ++i)
    {
        int streak = 0;
        int cnt = 0;

        for (int j = 0; j < m; ++j)
        {
            char c;
            cin >> c;

            if (c == '.')
            {
                cnt++;
            }
            else 
            {
                streak = max(streak, cnt);

                cnt = 0;
            }
        }
        streak = max(streak, cnt);

        cin >> v2[i];

        v[i] = streak;
    }

    vector<int> v3 = v;

    sort(v3.begin(), v3.end());
    v3.erase(unique(v3.begin(), v3.end()), v3.end());

    cout << v3.size() << "\n";

    for (int i = 0; i < n; ++i)
    {
        cout << v[i] << " " << v2[i] << "\n";
    }
}