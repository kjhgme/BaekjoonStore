#include <iostream>
using namespace std;

int main()
{
    int out{}, in{};
    int num{};
    int max{};

    for (int i = 0; i < 10; ++i)
    {
        cin >> out >> in;
        num += -out + in;
        if (num > max)
            max = num;
    }

    cout << max;
}