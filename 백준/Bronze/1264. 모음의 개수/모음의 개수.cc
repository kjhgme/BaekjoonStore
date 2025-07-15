#include <iostream>
#include <string>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    getline(cin, s);

    while(s != "#")
    {
        int sum = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                sum++;
            else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                sum++;
        }

        cout << sum << "\n";

        getline(cin, s);
    }
}