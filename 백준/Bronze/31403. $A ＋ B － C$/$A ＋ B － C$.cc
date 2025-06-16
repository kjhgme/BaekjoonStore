#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a = 0;
    string b;
    int n;

    cin >> n;

    a += n;
    b = to_string(n);

    cin >> n;

    a += n;
    b += to_string(n);

    cin >> n;

    a -= n;
    int x = stoi(b) - n;

    cout << a << "\n" << x;
}
