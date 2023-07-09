// You are using GCC
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        cout << (2 * i * i + 34 * i - 16) << " ";
        i++;
    }
    return 0;
}

/*
Series 2

 

The Event Organizing Company "Buzzcraft" focuses event management in a way that creates a win-win situation for all involved stakeholders. Buzzcraft don't look at building one time associations with clients, instead, aim at creating long-lasting collaborations that will span years to come. This goal of the company has helped them evolve and expand big with more workforces within notable time.

The number of employees of the company from the start day of their journey till now is recorded sensibly and is seemed to have followed a specific series like: 20, 60, 104, 152, 204,…….

 

Write a program which takes an integer N as the input and will output the series till the Nth term.



Input format :
First line of the input is an integer N.

Output format :
Output a single line the series till Nth term, each separated by a comma

Sample test cases :
Input 1 :
5
Output 1 :
20 60 104 152 204 


*/