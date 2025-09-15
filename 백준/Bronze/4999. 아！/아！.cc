#include <iostream>
#include <string>
using namespace std;

int main() {
    string jae, doctor;
    cin >> jae >> doctor;

    int jae_count = 0;
    int doctor_count = 0;

    for (char c : jae) {
        if (c == 'a') jae_count++;
    }

    for (char c : doctor) {
        if (c == 'a') doctor_count++;
    }

    if (jae_count >= doctor_count)
        cout << "go" << endl;
    else
        cout << "no" << endl;

    return 0;
}