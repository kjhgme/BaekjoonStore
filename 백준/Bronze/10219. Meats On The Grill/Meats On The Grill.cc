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
        int h, w;
        cin >> h >> w;

        vector<vector<char>> v(h, vector<char>(w));

        for (int j = 0; j < h; ++j) 
        {
            for (int k = 0; k < w; ++k)
            {
                cin >> v[j][k];
            }
        }

        for (int j = h - 1; j >= 0; --j)
        {
            for (int k = 0; k < w; ++k)
            {
                cout << v[j][k];
            }
            cout << endl;
        }
    }
    
}