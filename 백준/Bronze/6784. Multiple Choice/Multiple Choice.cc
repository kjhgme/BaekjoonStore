#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<char> student(N), answer(N);

    for (int i = 0; i < N; i++) 
        cin >> student[i];
    
    for (int i = 0; i < N; i++) 
        cin >> answer[i];

    int correct = 0;
    for (int i = 0; i < N; i++)
    {
        if (student[i] == answer[i])
            correct++;
    }

    cout << correct;
}