#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	while (true)
	{
		string s{};
		int BBraces{}, SBraces{};
		stack<char> st;

		getline(cin, s);

		if (s == ".")
			break;

		for (int i = 0; i < s.length(); ++i)
		{
			if (BBraces < 0 || SBraces < 0)
			{
				break;
			}
			else if (s[i] == '[') {
				BBraces++;
				st.push(s[i]);
			}
			else if (s[i] == ']') {
				BBraces--;

				if (st.empty() || st.top() == '(') {
					break;
				}
				st.pop();
			}
			else if (s[i] == '(') {
				SBraces++;
				st.push(s[i]);
			}
			else if (s[i] == ')') {
				SBraces--;
				if (st.empty() || st.top() == '[') {
					break;
				}
				st.pop();
			}
		}

		if (BBraces == 0 && SBraces == 0)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
}