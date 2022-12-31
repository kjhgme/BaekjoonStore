#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int p;
	int price;
	string name;
	int m_price{};
	string m_name;
	vector<string> v_name;
	for (int i = 0; i < n; ++i)
	{
		cin >> p;
		for (int j = 0; j < p; ++j) {
			cin >> price >> name;
			if (price > m_price)
			{
				m_price = price;
				m_name = name;
			}
		}

		v_name.push_back(m_name);
		m_price = 0;
	}

	for (int j = 0; j < v_name.size(); ++j) {
		cout << v_name[j] << endl;
	}
}