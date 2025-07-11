#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    bool IsSur = true;

    while (s != "*")
    {
        if (s.size() <= 2)
            cout << s << " is surprising.\n";
        else
        {
            for (int i = 1; i < s.size(); ++i)
            {
                vector<string> v;

                for (int j = 0; j < s.size() - i; ++j)
                {
                    string temp = string() + s[j] + s[j + i];
                    v.push_back(temp);
                }

                int vb = v.size();
                sort(v.begin(), v.end());
                v.erase(unique(v.begin(), v.end()), v.end());

                if (vb != v.size())
                {
                    IsSur = false;
                    break;
                }
            }

            if(IsSur)
                cout << s << " is surprising.\n";
            else
                cout << s << " is NOT surprising.\n";
        }

        IsSur = true;

        cin >> s;
    }

}