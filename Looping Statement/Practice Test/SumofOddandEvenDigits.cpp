/*

Sum of Odd and Even Digits



Write a program to calculate the sum of odd and even digits in a number. The input consists of a single integer 'n' which corresponds to the given number.The output must display the sum of odd numbers and even numbers.




Input format :
The input consist of a long number

Output format :
The output prints the sum of odd numbers and sum of even numbers separated by space

Sample test cases :
Input 1 :
2873546183037
Output 1 :
29 28

*/


// You are using GCC
#include <iostream>
#include <string>
using namespace std;
int main()
{
    // cout << "Enter the number: ";
    string input;
    getline(cin, input);
    int oddSum = 0;
    int evenSum = 0;
    for (int i = 0; i < input.length(); i++)
    {
        int digit = input[i] - '0';
        if (digit % 2 == 0)
        {
            evenSum += digit;
        }
        else
        {
            oddSum += digit;
        }
    }
    cout << oddSum << " ";
    cout << evenSum;
    return 0;
}