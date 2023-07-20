// You are using GCC

#include <iostream>
using namespace std;
int main()
{
    int cost, n;
    cin >> cost >> n;
    try
    {
        if (n == 0)
        {
            throw "Cannot divide by zero";
        }
        cout << cost / n << endl;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    return 0;
}