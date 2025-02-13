#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool binarySearch(const vector<int>& arr, int num) {
	int left = 0;
	int right = arr.size() - 1;

	while (left <= right) {
		int mid = left + (right - left) / 2;

		if (arr[mid] == num) 
			return true;
		else if (arr[mid] > num) 
			right = mid - 1;
		else
			left = mid + 1;
	}

	return false;
}

int main()
{
	int n;
	int m;

	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	cin >> m;
	vector<int> v2(m);

	for (int i = 0; i < m; ++i)
	{
		
		cin >>v2[i];
	}


	for (int i = 0; i < v2.size(); ++i)
	{
		cout << binarySearch(v, v2[i]) << " ";
	}
}
