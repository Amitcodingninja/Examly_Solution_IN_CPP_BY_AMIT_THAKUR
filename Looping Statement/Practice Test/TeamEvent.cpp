/*
Team Event

 

Super Quiz Bee is a famous quiz Competition that tests students on a wide variety of academic subjects. This week’s competition was a Team event and students who register for the event will be given a unique registration code N. The participants are teamed into 10 teams and the team to which a participant is assigned to depends on the absolute difference between the first and last digit in the registration code.

 

The event organizers wanted your help in writing an automated program that will ease their job of assigning teams to the participants. If the registration number given is less than 10, then the program should display "Invalid Input".

Input format :
The only line of input contains an integer N.

Output format :
Output the absolute difference between the first and last digit of N.

Sample test cases :
Input 1 :
345
Output 1 :
2

*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n, s, i[10], a, g;
    cin >> n;
    if (n / 10 == 0)
    {
        cout << "Invalid Input";
    }
    else
    {
        for (a = 0; n != 0; a++)
        {
            s = n % 10;
            n = n / 10;
            i[a] = s;
        }
        g = abs(i[0] - i[a - 1]);
        cout << g;
    }
    return 0;
}