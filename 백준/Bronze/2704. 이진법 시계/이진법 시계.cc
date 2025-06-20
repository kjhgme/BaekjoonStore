#include <iostream>
#include <string>
#include <bitset>

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
        string s;
        cin >> s;

        int x, y, z;

        x = stoi(s.substr(0, 2));
        y = stoi(s.substr(3, 2));
        z = stoi(s.substr(6, 2));

        bitset<6> b1(x);
        bitset<6> b2(y);
        bitset<6> b3(z);

        for (int j = 5; j >= 0; --j)
        {
            cout << b1[j] << b2[j] << b3[j];
        }
        cout << " ";

        cout << b1 << b2 << b3 << endl;
    }
   
}