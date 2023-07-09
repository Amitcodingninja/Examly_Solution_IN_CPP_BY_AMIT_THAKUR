// You are using GCC
// Seven Segment Display

 

// The Event Organizing Company "Buzzcraft" wanted to procure seven segment displays to display any numeric information display boards, scrolling ad banners, etc., to place it in their Events. The Company contracted out their order to MDC team at Orange labs who designs embedded sensing nodes and provides connectivity to tie them to the internet of things.



// They are working on building seven segment displays. But the Company wanted to know how many seven segment displays will they need to represent an Integer x. They use one seven segment display to represent one digit of an Integer. For example: Integer "100" needs "3" seven segment boards to be represented.



// Help them find out how many displays are needed?



// Input format :
// First and only line consists of one positive integer that needs to be represented using seven segment displays.

// Output format :
// Output a single line containing the number of digits of that integer.

// Sample test cases :
// Input 1 :
// 1
// Output 1 :
// 1
#include <iostream>
using namespace std;
int main()
{
    int inp, count = 0, value = 1;
    cin >> inp;
    while (1)
    {
        if (inp == 1 || inp == 0)
        {
            cout << "1";
            break;
        }
        if (value <= inp)
        {
            value *= 10;
            count++;
        }
        else
        {
            cout << count;
            break;
        }
    }
}