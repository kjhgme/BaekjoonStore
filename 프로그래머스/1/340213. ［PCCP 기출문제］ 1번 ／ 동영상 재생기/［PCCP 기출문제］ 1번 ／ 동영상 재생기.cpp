#include <string>
#include <vector>

using namespace std;
int ToSeconds(const std::string& time)
{
    int minutes = std::stoi(time.substr(0, 2));
    int seconds = std::stoi(time.substr(3, 2));
    return minutes * 60 + seconds;
}

string ToMinute(int time)
{
    string s = "";

    int min = time / 60;
    int sec = time % 60;

    if (min < 10) s += "0";
    s += to_string(min);
    s += ":";

    if (sec < 10) s += "0";
    s += to_string(sec);

    return s;
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";
    
    int LEN = ToSeconds(video_len);
    int POS = ToSeconds(pos);
    int OPS = ToSeconds(op_start);
    int OPE = ToSeconds(op_end);

    for (int i = 0; i < commands.size(); ++i)
    {
        if (OPS <= POS && POS < OPE)
            POS = OPE;

        if (commands[i] == "next")
            POS += 10;
        else if (commands[i] == "prev")
        {
            POS -= 10;

            if (POS < 0)
                POS = 0;
        }

        if (OPS <= POS && POS < OPE)
            POS = OPE;
        
        if (POS > LEN)
            POS = LEN;
    }

    answer = ToMinute(POS);

    return answer;
}
