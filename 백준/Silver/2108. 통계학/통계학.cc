#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int n{};
	int x{};
	int sum{};
	vector<int> v;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		v.push_back(x);
		sum += x;
	}

	// 산술평균
	sum = round((double)sum / n);
	if (sum == -0)
		cout << 0 << endl;
	else
		cout << sum << endl;

	// 중앙값
	sort(v.begin(), v.end());
	if (n == 1)
		cout << v[0] << endl;
	else
		cout << v[v.size() / 2] << endl;

	// 최빈값
	int count[8001] = { 0, };
	for (int i = 0; i < n; i++) {
		// 0 또는 양수일 경우
		if (v[i] >= 0) {
			count[int(v[i])]++;
		}
		// 음수일 경우
		else {
			count[int(fabs(v[i])) + 4000]++;
		}
	}

	// 최빈값이 여러개일 경우
	int max = count[0];
	int index = 0;
	for (int i = 0; i < 8001; i++) {
		if (max < count[i]) {
			index = i;
			max = count[i];
		}
	}

	vector <double> mv;
	for (int i = 0; i < 8001; i++) {
		if (max == count[i]) {
			if (i <= 4000) {
				mv.push_back(i);
			}
			else {
				mv.push_back((i - 4000) * (-1));
			}
		}
	}

	// 정렬. 두번째로 작은 최빈값 출력
	sort(mv.begin(), mv.end());
	// 최빈값이 하나인 경우
	if (mv.size() == 1) {
		cout <<mv[0] << endl;
	}
	else {
		cout << mv[1] << endl;
	}

	// 범위
	cout << v[v.size() - 1] - v[0] << endl;
}
