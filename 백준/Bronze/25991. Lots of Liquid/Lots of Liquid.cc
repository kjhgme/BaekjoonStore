#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);

    int N;
    cin >> N;
    
	double sum = 0;

	for (int i = 0; i < N; ++i)
	{
		double x;
		cin >> x;

		sum += (x * x * x);
	}

	cout << fixed << setprecision(15) << cbrt(sum);
}