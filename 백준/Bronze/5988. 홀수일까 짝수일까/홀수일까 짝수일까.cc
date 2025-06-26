#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
      
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string a;
        cin >> a;

        if (a[a.size() - 1] % 2 == 0)
        {
            cout << "even\n";
        }
        else
            cout << "odd\n";
    }
}