#include <string>
#include <vector>

using namespace std;

int ToMinute(int t)
{
    return (t / 100) * 60 + (t % 100);
}

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;

    for (auto& week : timelogs)
    {
        vector<int> temp;

        for (int i = 0; i < week.size(); i++)
        {
            int day = (startday + i - 1) % 7 + 1;

            if (day != 6 && day != 7)
                temp.push_back(week[i]);
        }

        week = move(temp);
    }

    for (int i = 0; i < schedules.size(); ++i)
{
    bool isValid = true;
    int sched = ToMinute(schedules[i]);

    for (auto day : timelogs[i])
    {
        int log = ToMinute(day);

        if (sched + 10 < log)
        {
            isValid = false;
            break;
        }
    }

    if (isValid)
        answer++;
}

    return answer;
}