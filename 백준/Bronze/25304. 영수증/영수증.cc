#include <iostream>
using namespace std;

int main()
{
    int x;
    int n;
    int sum{};
    
    cin  >> x;
    cin >> n;
    
    for(int i = 0; i < n; ++i)
    {
        int a;
        int b;
        cin >> a >> b;
        
        sum += (a*b);
    }
    
    if(sum == x)
        cout << "Yes";
    else
        cout << "No";
}