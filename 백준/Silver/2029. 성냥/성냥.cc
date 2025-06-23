#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

char c[10][11];

bool check_square(int x, int y, int size) {
    for (int i = 0; i < size; ++i) {
        if (c[x][y + 1 + i * 3] != '-' || c[x + size * 3][y + 1 + i * 3] != '-')
            return false;
    }
    for (int i = 0; i < size; ++i) {
        if (c[x + 1 + i * 3][y] != '|' || c[x + 1 + i * 3][y + size * 3] != '|')
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    char board[10][11] = {
    "+--+--+--+",
    "|..|..|..|",
    "|..|..|..|",
    "+--+--+--+",
    "|..|..|..|",
    "|..|..|..|",
    "+--+--+--+",
    "|..|..|..|",
    "|..|..|..|",
    "+--+--+--+"
    };

    int cnt = 0;
        
    for (int i = 0; i < 10; ++i) 
    {
        for (int j = 0; j < 10; ++j)
        {
            cin >> c[i][j];

            if (board[i][j] != c[i][j])
            {
                cnt++;
            }
        }
    }

    cout << cnt / 2 << " ";

    int squares = 0;
    for (int size = 1; size <= 3; ++size) {
        for (int i = 0; i <= 3 - size; ++i) {
            for (int j = 0; j <= 3 - size; ++j) {
                if (check_square(i * 3, j * 3, size))
                    squares++;
            }
        }
    }

    cout << squares;
}