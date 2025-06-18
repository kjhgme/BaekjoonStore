#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    int x;
    cin >> x;

    unsigned long long sum = 0;

    for (int i = 0; i < n; ++i)
    {
        int temp = ((v[i] + x - 1) / x) * x;
        sum += temp;
    }

    cout << sum;
}