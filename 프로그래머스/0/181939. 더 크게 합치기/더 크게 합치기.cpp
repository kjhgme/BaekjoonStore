#include <string>
#include <vector>
using namespace std;

int solution(int a, int b) {
    int answer = 0;

    int tempA = a;
    int tempB = b;

    int aSize = 1;
    int bSize = 1;

    while (a > 0)
    {
        a /= 10;
        aSize *= 10;
    }
    while (b > 0)
    {
        b /= 10;
        bSize *= 10;
    }

    int num1 = tempA * bSize + tempB;
    int num2 = tempB * aSize + tempA;

    if (num1 >= num2)
        answer = num1;
    else
        answer = num2;
    
    return answer;
}