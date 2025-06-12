#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int n;
    int cnt = 1;
    vector<string> v;
    vector<vector<int>> v2;

    cin >> n;

    while (n != 0)
    {
        for (int i = 0; i < n; ++i)
        {
            string s;
            cin >> s;
            v.push_back(s);

            vector<int> vv;
            v2.push_back(vv);

            for (int j = 0; j < n - 1; ++j)
            {
                char c;
                cin >> c;

                if (c == 'N')
                {
                    v2[i].push_back(j + 1);
                }
            }
        }

        cout << "Group " << cnt << "\n";

        int temp = 0;

        for (int i = 0; i < v2.size(); ++i)
        {
            if (v2[i].size() != 0)
            {
                temp++;
            }
        }

        if (temp == 0)
            cout << "Nobody was nasty\n";
        else {
            for (int i = 0; i < v.size(); ++i)
            {
                for (int j = 0; j < v2[i].size(); ++j)
                {
                    int num = i;

                    num -= v2[i][j];

                    if (num < 0)
                        num += v.size();

                    cout << v[num] << " was nasty about " << v[i] << "\n";
                }
            }
        }

        cout << "\n";

        cnt ++;
        v.clear();
        v2.clear();

        cin >> n;
    }

    return 0;
}
