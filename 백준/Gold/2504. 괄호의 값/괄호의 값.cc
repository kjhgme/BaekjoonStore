#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <stack>

using namespace std;

#define all(x) (x).begin(), (x).end()


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    stack<char> st;
    stack<int> scores;

    // () 2, [] 3, (x) 2x, [x] 3x, ()[] 2+3
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '(' || s[i] == '[')
        {
            st.push(s[i]);
            scores.push(-1);
        }
        else
        {
            if (st.empty())
            {
                cout << 0;
                return 0;
            }

            int temp = 0;

            while (!scores.empty() && scores.top() != -1)
            {
                temp += scores.top();
                scores.pop();
            }

            if (scores.empty()) 
            {
                cout << 0;
                return 0;
            }

            scores.pop();

            if ((s[i] == ')' && st.top() != '(') || (s[i] == ']' && st.top() != '['))
            {
                cout << 0;
                return 0;
            }

            st.pop();

            if (temp == 0) temp = (s[i] == ')') ? 2 : 3;
            else temp *= (s[i] == ')') ? 2 : 3;

            scores.push(temp);
        }
    }

    if (!st.empty()) {
        cout << 0;
        return 0;
    }

    int result = 0;
    while (!scores.empty()) {
        result += scores.top();
        scores.pop();
    }

    cout << result;
    return 0;
}