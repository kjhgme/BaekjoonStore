#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> signals) {
    int G0 = signals[0][0];
    int Y0 = signals[0][1];
    int R0 = signals[0][2];

    int cycle0 = G0 + Y0 + R0;

    for (int k = 0; k < 10'000'000; ++k)
    {
        for (int y = 0; y < Y0; ++y)
        {
            int t = k * cycle0 + G0 + y;

            bool ok = true;

            for (int i = 1; i < signals.size(); ++i)
            {
                int G = signals[i][0];
                int Y = signals[i][1];
                int R = signals[i][2];

                int cycle = G + Y + R;
                int cur = t % cycle;

                if (!(cur >= G && cur < G + Y))
                {
                    ok = false;
                    break;
                }
            }

            if (ok) return t + 1;
        }
    }

    return -1;
}