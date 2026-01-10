#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int a, b;   // 도우 가격, 토핑 가격
    cin >> a >> b;

    int c;  // 도우의 열량
    cin >> c;

    vector<int> v(n);   // 토핑 열량
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<int>());

    int temp = 0;
    int ans = c / a;

    for(int cnt = 1; cnt <= n; ++cnt)
    {
        temp += v[cnt - 1];

        int money = a + (b * cnt);

        int temp2 = (temp + c) / money;

        if (ans > temp2)
        {
            break;
        }
        ans = temp2;
    }
    cout << ans;
}
