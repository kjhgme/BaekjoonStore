#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <math.h>
#include <algorithm>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string s1, s2;
        cin >> s1 >> s2;

        if (s1.size() < s2.size())
            swap(s1, s2);

        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());

        string result;
        int carry = 0;

        for (size_t i = 0; i < s1.size(); ++i)
        {
            int a = s1[i] - '0';
            int b = (i < s2.size()) ? s2[i] - '0' : 0;

            int sum = a + b + carry;
            result.push_back((sum % 2) + '0');
            carry = sum / 2;
        }

        if (carry)
            result.push_back('1');

        reverse(result.begin(), result.end());

        int pos = 0;
        while (pos < (int)result.size() - 1 && result[pos] == '0')
            pos++;

        cout << result.substr(pos) << '\n';
    }
}