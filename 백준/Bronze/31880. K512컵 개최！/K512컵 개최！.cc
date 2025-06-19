#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    unsigned long long sum = 0;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        sum += x;
    }

    for (int i = 0; i < m; ++i)
    {
        int x;
        cin >> x;
    
        if(x != 0)
            sum *= x;
    }

    cout << sum;
}