#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt = 1;

    while (true)
    {
        string s, s2;

        cin >> s >> s2;

        if (s == "END" && s2 == "END")
            break;

        cout << "Case " << cnt << ": ";
        
        sort(s.begin(), s.end());
        sort(s2.begin(), s2.end());

        if (s.compare(s2) == 0)
            cout << "same\n";
        else
            cout << "different\n";

        cnt++;
    }
}
