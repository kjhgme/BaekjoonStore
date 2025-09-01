#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
#include <math.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int turnScore = 1;
int turnTime = 4;
int Time = 0;
int score = 0;
int reward1 = 0;
int reward2 = 0;
int reward3 = 0;
int reward4 = 0;

void EndGame()
{
    if (score >= 35 && score < 65)
    {
        reward1++;
    }
    else if (score >= 65 && score < 95)
    {
        reward2++;
    }
    else if (score >= 95 && score < 125)
    {
        reward3++;
    }
    else if(score >= 125)
    {
        reward4++;
    }

    score = 0; 
    Time = 0;
    turnScore = 1;
    turnTime = 4;
}

void func()
{
    int x;
    cin >> x;

    switch (x)
    {
    case 1:
        EndGame();
        return;
    case 2:
        if (turnScore > 1)
        {
            turnScore = turnScore / 2;
        }
        else if (turnScore == 1)
        {
            turnTime += 2;
        }
        break;
    case 3:
        break;
    case 4:
        Time += 56;
        break;
    case 5:
        if (turnTime > 1)
            turnTime--;
        break;
    case 6:
        if (turnScore < 32)
            turnScore = turnScore * 2;
        break;
    default:
        break;
    }

    score += turnScore;
    Time += turnTime;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    bool IsGameOver = false;

    for (int i = 0; i < n; ++i)
    {
        if (Time > 240)
        {
            EndGame();
        }

        func();
    }

    cout << reward1 << "\n";
    cout << reward2 << "\n";
    cout << reward3 << "\n";
    cout << reward4 << "\n";
}