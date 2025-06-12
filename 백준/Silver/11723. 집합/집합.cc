#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    set<int> S;

    int m;
    cin >> m;

    for (int i = 0; i < m; ++i)
    {
        string s;
        int n;

        cin >> s;

        if (s == "add" || s == "remove" || s == "check" || s == "toggle")
        {
            cin >> n;

            if (s == "add")
            {
                S.insert(n);
            }
            else if (s == "remove")
            {
                S.erase(n);
            }
            else if (s == "check")
            {
                set<int>::iterator iter;
                iter = S.find(n);
                if (iter != S.end())
                    cout << "1\n";
                else
                    cout << "0\n";
            }
            else if (s == "toggle")
            {
                set<int>::iterator iter;
                iter = S.find(n);
                if (iter != S.end())
                    S.erase(n);
                else
                    S.insert(n);
            }
        }
        else if (s == "all")
        {
            for (int i = 1; i <= 20; ++i)
            {
                S.insert(i);
            }
        }
        else if (s == "empty")
        {
            S.clear();
        }
    }
}
