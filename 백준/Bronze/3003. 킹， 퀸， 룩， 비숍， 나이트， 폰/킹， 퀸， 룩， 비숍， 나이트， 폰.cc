#include <iostream>
using namespace std;

int main()
{
    int x[6];
    int max[6] {1,1,2,2,2,8};
    int n{};
    for(int i = 0; i < 6; ++i)
    {
        cin >> n;
        x[i] = n;
    }
    
    for(int i = 0; i < 6; ++i)
    {
        cout << max[i] - x[i] << " ";
    }
}