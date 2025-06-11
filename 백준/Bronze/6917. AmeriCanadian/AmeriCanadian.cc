#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true)
    {
        string s;
        cin >> s;

        if (s == "quit!")
            break;
        
        if ('o' == s[s.size() - 2] && 'r' == s.back() && s.size() >= 4)
        {
            if (s[s.size() - 3] != 'a' && s[s.size() - 3] != 'e' && s[s.size() - 3] != 'i' &&
                s[s.size() - 3] != 'o' && s[s.size() - 3] != 'u' && s[s.size() - 3] != 'y')
            {
                cout << s.substr(0, s.size() - 2) << "our\n";
            }
            else
                cout << s << endl;
        }
        else
            cout << s << endl;
    }
}