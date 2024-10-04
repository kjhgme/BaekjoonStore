#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int arr[9][9];
	int maxNum{};
	int a{}, b{};


	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			cin >> arr[i][j];
			if (arr[i][j] >= maxNum) {
				maxNum = arr[i][j];
				a = i;
				b = j;
			}
		}
	}

	cout << maxNum << endl;
	cout << a+1 << " " << b+1;


}