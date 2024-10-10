#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	string name{};
	float num{};
	string score{};

	float Nsum{};
	float Ssum{};

	for (int i = 0; i < 20; ++i) {
		cin >> name >> num >> score;

		Nsum += num;

		if (score == "P") {
			Nsum -= num;
		}
		else if (score == "A+") {
			Ssum += num * 4.5;
		}
		else if (score == "A0") {
			Ssum += num * 4.0;
		}
		else if (score == "B+") {
			Ssum += num * 3.5;
		}
		else if (score == "B0") {
			Ssum += num * 3.0;
		}
		else if (score == "C+") {
			Ssum += num * 2.5;
		}
		else if (score == "C0") {
			Ssum += num * 2.0;
		}
		else if (score == "D+") {
			Ssum += num * 1.5;
		}
		else if (score == "D0") {
			Ssum += num * 1.0;
		}
		else if (score == "F") {
			Ssum += num * 0.0;
		}
	}

	cout.precision(7);
	cout << Ssum / Nsum << endl;
}