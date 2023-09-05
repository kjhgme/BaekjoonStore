#include <iostream>
using namespace std;

int main()
{
    int T{};  // 테스트 케이스의 개수

    int a{}, b{};   // 두 정수 a, b

    cin >> T;

    // 테스트 케이스만큼 두 정수의 합 출력하기
    for (int i = 0; i < T; ++i)
    {
        cin >> a >> b;
        cout << "Case #" << i+1 << ": " << a + b << endl;
    }
}