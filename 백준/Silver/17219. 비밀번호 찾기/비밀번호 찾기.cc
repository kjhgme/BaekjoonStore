#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    map<string, string> maps;

    cin >> n >> m;

    for (int i = 0; i < n; ++i)
    {
        string s1;
        string s2;

        cin >> s1 >> s2;

        maps.emplace(s1, s2);
    }

    for (int i = 0; i < m; ++i)
    {
        string s;
        cin >> s;

        auto iter = maps.find(s);

        if (iter != maps.end())
            cout << iter->second << "\n";
    }
}