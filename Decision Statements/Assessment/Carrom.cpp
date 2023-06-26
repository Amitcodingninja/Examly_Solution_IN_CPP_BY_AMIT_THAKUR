// You are using GCC

#include <iostream>
using namespace std;
int calculateScore(int coinsLeft, char pocketedRed)
{
    if (coinsLeft < 1 || coinsLeft > 9)
    {
        return -1;
        // Invalid Input
    }
    int score = coinsLeft;
    if (pocketedRed == 'y' || pocketedRed == 'Y')
    {

        score += 5;
    }
    return score;
}
int main()
{
    int coinsLeft;
    char pocketedRed;
    cin >> coinsLeft >> pocketedRed;
    int score = calculateScore(coinsLeft, pocketedRed);
    if (score == -1)
    {
        cout << "Invalid Input" << endl;
    }
    else
    {
        cout << score << endl;
    }
    return 0;
}