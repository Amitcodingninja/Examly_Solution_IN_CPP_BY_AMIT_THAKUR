
#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    if (N < 1 || N > 52)
    {
        cout << "Invalid Input";
        return 0;
    }
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        if (A[i] < 1 || A[i] > 13)
        {
            cout << "Invalid Input";
            return 0;
        }
    }
    int Point_A = 0, Point_B = 0;
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            if (A[i] == 1 && A[i + 1] < 11 && A[i + 1] != 1 && A[i + 2] < 11 && A[i + 2] != 1 && A[i + 3] < 11 && A[i + 3] != 1 && A[i + 4] < 11 && A[i + 4] != 1)
            {
                cout << "Player A scores4point(s)" << endl;
                Point_A += 4;
            }
            if (A[i] == 13 && A[i + 1] < 11 && A[i + 1] != 1 && A[i + 2] < 11 && A[i + 2] != 1 && A[i + 3] < 11 && A[i + 3] != 1)
            {
                cout << "Player A scores3point(s)" << endl;
                Point_A += 3;
            }
            if (A[i] == 12 && A[i + 1] < 11 && A[i + 1] != 1 && A[i + 2] < 11 && A[i + 2] != 1)
            {
                cout << "Player A scores2point(s)" << endl;
                Point_A += 2;
            }
            if (A[i] == 11 && A[i + 1] < 11 && A[i + 1] != 1)
            {
                cout << "Player A scores1point(s)" << endl;
                Point_A += 1;
            }
        }
        else
        {
            if (A[i] == 1 && A[i + 1] < 11 && A[i + 1] != 1 && A[i + 2] < 11 && A[i + 2] != 1 && A[i + 3] < 11 && A[i + 3] != 1 && A[i + 4] < 11 && A[i + 4] != 1)
            {
                cout << "Player B scores4point(s)" << endl;
                Point_B += 4;
            }
            if (A[i] == 13 && A[i + 1] < 11 && A[i + 1] != 1 && A[i + 2] < 11 && A[i + 2] != 1 && A[i + 3] < 11 && A[i + 3] != 1)
            {
                cout << "Player B scores3point(s)" << endl;
                Point_B += 3;
            }
            if (A[i] == 12 && A[i + 1] < 11 && A[i + 1] != 1 && A[i + 2] < 11 && A[i + 2] != 1)
            {
                cout << "Player B scores 2 point(s)" << endl;
                Point_B += 2;
            }
            if (A[i] == 11 && A[i + 1] < 11 && A[i + 1] != 1)
            {
                cout << "Player B scores1point(s)" << endl;
                Point_B += 1;
            }
        }
    }
    cout << "Player A:" << Point_A << "point(s)" << endl;
    cout << "Player B:" << Point_B << "point(s)" << endl;

    return 0;
}
















/*
Lucky Cards

 

The Hatfield Game Fair is the premier event of its kind for adults interested in some intellectual and cognitive brain games. Exciting games were organized for kids between age group of 8 and 10. One such game was the "Lucky Cards", a simple two-player game, played with a deck of cards. The cards in the deck have these possible names: two, three, four, five, six, seven, eight, nine, ten, jack, queen, king, ace. The cards labeled jack, queen, king, ace are collectively known as high cards.

The numerical equivalent of the high cards is as given below:

Jack – 11

Queen – 12

King – 13

Ace - 1

Please note here, though Ace has a numerical equivalent value as 1, it is always considered as the top rated card. So it is also included in the list of high cards.

 

The game organizer selects N cards and places it in the deck faced-down on the table. Player A turns over the top card and places it on a pile; then player B turns over the top card and places it on the same pile. A and B alternate turns until the N cards are exhausted. The game is scored as follows:

• if a player turns over an ace that is 1, with at least 4 cards remain to be turned over, and none of the next 4 cards is a high card, that player scores 4 points

• if a player turns over a king that is 13, with at least 3 cards remain to be turned over, and none of the next 3 cards is a high card, that player scores 3 points

• if a player turns over a queen that is 12, with at least 2 cards remain to be turned over, and none of the next 2 cards is a high card, that player scores 2 points

• if a player turns over a jack that is 11, with at least 1 card remains to be turned over, and the next card is not a high card, that player scores 1 point

Write a program to calculate the scores of the two players.



Input format :
The first line of the input contain an integer N, which corresponds to the number of cards in the deck.

Each of the following N lines will contain an integer that corresponds to the numerical value of the cards that the players turn over. The first line denotes the first card to be turned over; the next line the next card; and so on.



Output format :
Print the individual scores of the players whenever a player scores in separate new lines.

Print the total score for each player in the last two lines of the output at the end of the game



Sample test cases :
Input 1 :
15
3
2
1
5
6
4
8
11
2
3
2
13
6
10
6
Output 1 :
Player A scores4point(s)
Player B scores1point(s)
Player B scores3point(s)
Player A:4point(s)
Player B:4point(s)
*/