// You are using GCC
/*
Hollow Pyramid

 

The much awaited event at the entertainment industry every year is the "Screen Awards". This year the event is going to be organized on December 25 to honour the Artists for their professional excellence in Cinema. The Organizers of the event, J&R Events, decided to design some attractive and LED Matrix panel boards for the show promotions all across the venue.

 

The Event organizers wanted to program the display boards with some specific pattern using alphabets and special characters. Help them write a program to design the pattern of a hollow pyramid in the matrix panel, given the number of lines of the pattern.



Input format :
First line of the input is an integer that refers to the number of lines in the pattern.

Output format :
Output the pattern as given in the output.

Sample test cases :
Input 1 :
4
Output 1 :
bbb*bbb
bb*i*bb
b*iii*b
*******

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int si = n + (n - 1);
    int sp = n;
    int st = -1;
    for (int i = 1; i <= n; i++)
    {
        sp = sp - 1;
        st = st + 2;
        for (int j = 1; j <= sp; j++)
        {
            cout << "b";
        }
        for (int k = 1; k <= st; k++)
        {
            if (i > 1 && i < n)
            {
                if (k > 1 && k < st)
                {
                    cout << "i";
                }
                else
                {
                    cout << "*";
                }
            }
            else
            {
                cout << "*";
            }
        }
        for (int l = 1; l <= sp; l++)
        {

            cout << "b";
        }
        cout << endl;
    }
    return 0;
}