#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool desc(int a, int b) {
    return a > b;
}

int solution(int k, int m, vector<int> score) {
    int answer = 0;

    sort(score.begin(), score.begin() + score.size(), desc);

    int i = 0;
    while (i < static_cast<int>(score.size()))
    {
        i += m;
        
         if (i > static_cast<int>(score.size()))
            break;
        
        answer += (score[i - 1] * m); 
    }
    
    return answer;
}