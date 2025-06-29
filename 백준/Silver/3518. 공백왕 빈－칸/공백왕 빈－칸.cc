#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> v;
    string s;
    while (getline(cin, s)) v.push_back(s);

    for (auto& line : v) 
    {
        size_t p = line.find_first_not_of(' ');

        if (p == string::npos)
            line.clear();
        else
            line.erase(0, p);
    }

    for (auto& line : v) 
    {
        for (size_t j = 0; j + 1 < line.size(); ) 
        {
            if (line[j] == ' ' && line[j + 1] == ' ') 
                line.erase(j, 1);
            else
                ++j;
        }
    }

    for (int q = 0; ; )
    {
        vector<int> vi(v.size(), -1);
        int longest = 0;
                
        for (int i = 0; i < (int)v.size(); ++i) 
        {
            auto& line = v[i];
            for (int j = q; j <= (int)line.size(); ++j) 
            {
                if (j == (int)line.size() || line[j] == ' ') 
                {
                    vi[i] = j;
                    longest = max(longest, j - q);
                    break;
                }
            }
        }

        if (longest == 0) break;

        for (int i = 0; i < (int)v.size(); ++i) 
        {
            if (vi[i] == -1 || vi[i] == (int)v[i].size()) 
                continue;

            int pad = longest - (vi[i] - q);
            if (pad > 0) v[i].insert(vi[i], pad, ' ');
        }

        q += longest + 1;
    }

    for (auto& line : v) {
        size_t p = line.find_last_not_of(' ');
        if (p == string::npos) line.clear();
        else line.erase(p + 1);
    }

    for (const auto& line : v) cout << line << '\n';
}
