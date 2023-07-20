// You are using GCC

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    if (cin >> n)
    {
        cout << n << endl;
    }
    else
    {
        cout << "Input mismatch Exception occured while reading the value" << endl;
    }
    return 0;
}