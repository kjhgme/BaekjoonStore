#include <iostream>
using namespace std;

int main()
{
    int n{};
    int a, b;
    
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        cout << a+b << "\n";
    }
    
    
}