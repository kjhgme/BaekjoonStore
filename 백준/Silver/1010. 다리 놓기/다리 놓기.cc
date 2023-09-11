#include <iostream>
using namespace std;

int main()
{
    int t;
    int n, m;
    int answer, temp;

    cin >> t;
    
    for (int i = 0; i < t; ++i)
    {
        cin >> n >> m;

        answer = 1;
        temp = 1;
        for (int i = m; i > m - n; i--) {
            answer *= i;
            answer /= temp++;
        }

        cout << answer << endl;
    }

}