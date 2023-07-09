// You are using GCC

#include <iostream>
using namespace std;
void oddOrEven(int *a)
{
    if (*a % 2 == 0)
    {
        cout << *a << " is even" << endl;
    }
    else
    {
        cout << *a << " is odd" << endl;
    }
}
int main()
{
    int num;
    // cout << "Enter an integer: ";
    cin >> num;
    oddOrEven(&num);
    return 0;
}