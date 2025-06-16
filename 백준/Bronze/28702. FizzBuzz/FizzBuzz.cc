#include <iostream>
#include <cctype>
#include <string>

using namespace std;

bool isNumString(const std::string& s) {
    for (char c : s) {
        if (!isdigit(c)) return false;
    }
    return !s.empty();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tempNum = -1;
    int tempI = -1;
    int answer = -1;

    for (int i = 0; i < 3; ++i)
    {
        string s;
        cin >> s;

        if (isNumString(s))
        {
            tempNum = stoi(s);
            tempI = i;
        }
    }

    if (tempNum != -1)
    {
        tempI = 3 - tempI;

        answer = tempNum + tempI;

        if (answer % 3 == 0 && answer % 5 == 0)
            cout << "FizzBuzz\n";
        else if (answer % 3 == 0 && answer % 5 != 0)
            cout << "Fizz\n";
        else if (answer % 3 != 0 && answer % 5 == 0)
            cout << "Buzz\n";
        else
            cout << answer << "\n";

        return 0;
    }
}
