#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num = 1;
	int a, b;
	int cnt = 0;

	cout << "? A " << num << endl;

	for (int i = 0; i < 18; ++i)
	{
		int n;
		cin >> n;

		if (n == 1 && cnt == 0)
		{
			a = num;
			cnt++;
			num = 1;
			cout << "? B " << num << endl;
		}
		else if (n == 1 && cnt == 1)
		{
			b = num;
			cnt++;
			num = 1;
			break;
		}		
		else if (n == 0 && cnt == 0)
		{
			num++;
			cout << "? A " << num << endl;
		}
		else if (n == 0 && cnt == 1)
		{
			num++;
			cout << "? B " << num << endl;
		}		
	}

	cout << "! " << a + b;
}