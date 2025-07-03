#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;

    getline(cin, s);

    int num = 0;

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == 'B')
        {
            num += 2;
        }
        else if (s[i] == 'A' || s[i] == 'a' || s[i] == 'b' || s[i] == 'D' || s[i] == 'd' || s[i] == 'e'
            || s[i] == 'g' || s[i] == 'O' || s[i] == 'o' || s[i] == 'P' || s[i] == 'p' || s[i] == 'Q'
            || s[i] == 'q' || s[i] == 'R' || s[i] == '@')
        {
            num += 1;
        }
    }

    cout << num;
}