#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int r, c;
        cin >> r >> c;

        vector<vector<char>> v(r, vector<char>(c));
        int sum = 0;

        for (int j = 0; j < r; ++j)
        {
            for (int k = 0; k < c; ++k)
            {
                cin >> v[j][k];

                if (k >= 2)
                {
                    if (v[j][k - 2] == '>' && v[j][k - 1] == 'o' && v[j][k] == '<')
                        sum++;
                }

                if (j >= 2)
                {
                    if (v[j - 2][k] == 'v' && v[j - 1][k] == 'o' && v[j][k] == '^')
                        sum++;
                }
            }
        }

        cout << sum << "\n";
    }    
}