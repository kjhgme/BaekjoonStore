#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); ++i)
    {
        switch (s[i])
        {
        case 'B':
            cout << 'v';
            break;
        case 'E':
            cout << "ye";
            break;
        case 'H':
            cout << "n";
            break;
        case 'P':
            cout << 'r';
            break;
        case 'C':
            cout << "s";
            break;
        case 'Y':
            cout << "u";
            break;
        case 'X':
            cout << 'h';
            break;
        default:
            cout << static_cast<char>(tolower(s[i]));
            break;
        }
    }
}