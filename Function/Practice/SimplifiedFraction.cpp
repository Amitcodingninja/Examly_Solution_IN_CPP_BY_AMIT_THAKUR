// You are using GCC

#include <iostream>
#include <algorithm>
using namespace std;
int getGCD(int num, int den)
{
    int gcd = 1;
    for (int i = min(num, den);
         i >= 2; i--)
    {
        if ((num % i == 0) && (den % i == 0))
        {
            gcd = i;
            break;
        }
    }
    return gcd;
}
void printValue(int num, int den)
{
    if (num <= 0)
    {
        cout << 0 << endl;
    }
    else if (num < den)
    {
        int gcd = getGCD(num, den);
        cout << num / gcd << "/" << den / gcd << endl;
    }
    else if (num > den)
    {
        int rem = num % den;
        int quo = (int)(num / den);
        if (rem != 0)
        {
            int gcd = getGCD(rem, den);
            cout << quo << " " << rem / gcd << "/" << den / gcd << endl;
        }
        else
        {
            cout << quo << endl;
        }
    }
    else
    {
        cout << 1 << endl;
    }
}
int main()
{
    int num, den;
    cin >> num >> den;
    printValue(num, den);
    return 0;
}