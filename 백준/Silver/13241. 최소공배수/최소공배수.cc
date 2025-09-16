#include <iostream>

using namespace std;

long long GCD(long long a, long long b) {

    while (b != 0) {

        long long temp = a % b;

        a = b;

        b = temp;

    }

    return a;

}

int main() {

    ios::sync_with_stdio(false);

    cin.tie(nullptr);

    long long A, B;

    cin >> A >> B;

    long long gcd = GCD(A, B);

    long long lcm = (A / gcd) * B;
    cout << lcm << "\n";

    return 0;

}