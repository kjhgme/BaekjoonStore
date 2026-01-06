#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <queue>
#include <stack>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    stack<int> st;
    queue<char> q;

    long long ans = 0;
    bool bChecek = false;
    for (auto x : s)
    {
        if (0 <= x - '0' && x - '0' <= 9)
        {
            if (bChecek)
            {
                while (!q.empty())
                {
                    int temp1 = st.top();
                    st.pop();
                    int temp2 = st.top();
                    st.pop();

                    char c = q.front();
                    q.pop();

                    int tempAns;

                    if (c == '+')
                    {
                        tempAns = temp1 + temp2;
                    }
                    else if (c == '-')
                    {
                        tempAns = temp2 - temp1;
                    }
                    else if (c == '*')
                    {
                        tempAns = temp1 * temp2;
                    }
                    else if (c == '/')
                    {
                        tempAns = temp2 / temp1;
                    }
                    st.push(tempAns);
                }
            }

            bChecek = false;
            st.push(atoi(&x));
        }
        else
        {
            q.push(x);
            bChecek = true;
        }
    }

    while (!q.empty())
    {
        int temp1 = st.top();
        st.pop();
        int temp2 = st.top();
        st.pop();

        char c = q.front();
        q.pop();

        int tempAns;

        if (c == '+')
        {
            tempAns = temp1 + temp2;
        }
        else if (c == '-')
        {
            tempAns = temp2 - temp1;
        }
        else if (c == '*')
        {
            tempAns = temp1 * temp2;
        }
        else if (c == '/')
        {
            tempAns = temp2 / temp1;
        }
        st.push(tempAns);
    }

    cout << st.top();
}