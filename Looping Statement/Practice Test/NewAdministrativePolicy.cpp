// You are using GCC

/*
New Administrative Policy

 

"Pine Tree" is a recently launched startup Event Management company. The company gained a good reputation within a short span because of its highly reliable service delivery. As per the new administrative policies of the company, the Chairman of the company is elected every 4 years, the Finance Director is appointed every 2 years, the Chief Technical Director is elected every 3 years and the Security Chief is replaced every 5 years.



This year, Year X, the newly elected Chairman announced the appointment of the Finance Director, a new Chief Technical Director and congratulated the Security Chief for winning the recent election. That is, all positions were changed over. This is highly unusual. You will quantify how unusual this really is.



Write a program that inputs the year X and the future year Y and lists all years between X and Y inclusive when all positions change.



Input format :
First line of the input is an integer that corresponds to the year X.

Second line of the input is an integer that corresponds to the future year Y.



Output format :
Output in separate lines the list of years between X and Y inclusive when all positions change

Sample test cases :
Input 1 :
2000
2100
Output 1 :
All positions change in year2000
All positions change in year2060
Code Size : 1024 kb
*/
#include <iostream>
using namespace std;
int main()
{
    int cy, fy, m, t, c, d;
    cin >> cy;
    cin >> fy;
    m = 0;
    t = 0;
    c = 0;

    d = 0;
    for (int y = cy; y <= fy; y++)
    {
        if (m == 0 && t == 0 && c == 0 && d == 0)
        {
            cout << "All positions change in year" << y << endl;
        }
        m = (m + 1) % 4;
        t = (t + 1) % 2;
        c = (c + 1) % 3;
        d = (d + 1) % 5;
    }
    return 0;
}