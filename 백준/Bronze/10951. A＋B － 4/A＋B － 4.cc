#include <iostream>
using namespace std;

int main()
{
    int a{}, b{};   // 두 정수 a, b

    //두 정수의 합 출력하기
    while(true)
    {
        if (scanf("%d %d", &a, &b) == -1) {
            return 0;
        }

        cout << a + b << endl;
    }

}