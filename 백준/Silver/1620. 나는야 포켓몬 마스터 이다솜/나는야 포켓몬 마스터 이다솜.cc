#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    unordered_map<int, string> num_to_name;
    unordered_map<string, int> name_to_num;

    for (int i = 1; i <= n; ++i)
    {
        string s;
        cin >> s;
        num_to_name[i] = s;
        name_to_num[s] = i;
    }

    for (int i = 0; i < m; ++i)
    {
        string s;
        cin >> s;

        if (isdigit(s[0]))  // 입력이 숫자인 경우
        {
            int value = stoi(s);
            cout << num_to_name[value] << "\n";
        }
        else  // 입력이 문자열인 경우
        {
            cout << name_to_num[s] << "\n";
        }
    }

    return 0;
}
