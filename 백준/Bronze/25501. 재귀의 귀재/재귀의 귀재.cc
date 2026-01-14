#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int cnt = 0;

int recursion(const char* s, int l, int r) {
    cnt++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);    
}

int isPalindrome(const char* s) {
    return recursion(s, 0, strlen(s) - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;

        const char* cstr = s.c_str();
        int result = isPalindrome(cstr);

        printf("%d %d\n", result, cnt);

        cnt = 0;
    }
}