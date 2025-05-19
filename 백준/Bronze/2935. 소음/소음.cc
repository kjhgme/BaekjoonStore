#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string addStrings(string a, string b) {
    string result;
    int carry = 0;
    int i = (int)a.size() - 1;
    int j = (int)b.size() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int x = (i >= 0 ? a[i--] - '0' : 0);
        int y = (j >= 0 ? b[j--] - '0' : 0);
        int sum = x + y + carry;
        carry = sum / 10;
        result.push_back(sum % 10 + '0');
    }

    reverse(result.begin(), result.end());
    return result;
}

string multiplyStrings(string num1, string num2) {
    int len1 = (int)num1.size();
    int len2 = (int)num2.size();
    vector<int> result(len1 + len2, 0);

    for (int i = len1 - 1; i >= 0; --i) {
        for (int j = len2 - 1; j >= 0; --j) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = result[i + j + 1] + mul;
            result[i + j] += sum / 10;
            result[i + j + 1] = sum % 10;
        }
    }

    string resultStr;
    for (int num : result)
        if (!(resultStr.empty() && num == 0))
            resultStr += num + '0';

    return resultStr.empty() ? "0" : resultStr;
}

string qwer(string n, string m, char c)
{
    string x;

    if (c == '+')
    {
        x = addStrings(n, m);
    }
    else if (c == '*')
    {
        x = multiplyStrings(n, m);
    }

    return x;
}


int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);

	string n, m;
	char c;

	cin >> n >> c >> m;

	cout << qwer(n, m, c);
  }