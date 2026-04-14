#include <iostream>
#include <vector>

using namespace std;

class password
{
public:
    string A = "000000";
    string B = "001111";
    string C = "010011";
    string D = "011100";
    string E = "100110";
    string F = "101001";
    string G = "110101";
    string H = "111010";

    int diffCount(const string& a, const string& b)
    {
        int cnt = 0;
        for (int i = 0; i < 6; ++i)
        {
            if (a[i] != b[i]) cnt++;
        }
        return cnt;
    }

    char ans(string s, int x)
    {
        vector<pair<string, char>> v = {
            {A, 'A'}, {B, 'B'}, {C, 'C'}, {D, 'D'},
            {E, 'E'}, {F, 'F'}, {G, 'G'}, {H, 'H'}
        };

        for (auto& p : v)
        {
            if (diffCount(s, p.first) <= 1)
                return p.second;            
        }

        cout << x << "\n";
        return 0;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string input;
    cin >> input;

    password P;

    string anss;

    for (int i = 0; i < n; ++i)
    {
        string s = input.substr(i * 6, 6);

        char c = P.ans(s, i + 1);

        if (c != 0)
        {
            anss += c;
        }
        else
            return 0;
    }

    cout << anss;
}