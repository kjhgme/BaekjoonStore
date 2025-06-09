#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<float> v;
	float sum = 0.0f;

	for (int i = 0; i < 10; ++i)
	{
		float n;

		cin >> n;
		v.push_back(n);

		sum += n;
	}

	float mean = sum / 10.0f;

	float variance = 0.0f;
	for (int i = 0; i < 10; ++i)
	{
		variance += pow(v[i] - mean, 2);
	}

	variance /= 9;
	float std_dev = sqrt(variance);

	if (std_dev > 1.0f)
		cout << "NOT COMFY";
	else
		cout << "COMFY";

	return 0;
}