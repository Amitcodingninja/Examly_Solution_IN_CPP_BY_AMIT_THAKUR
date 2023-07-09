// You are using GCC

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string X, Y;
    cin >> X >> Y;
    bool match = true;
    for (int i = 0; i < X.length(); i++)
    {
        if (X[i] != '?' && Y[i] != '?' && X[i] != Y[i])
        {
            match = false;
            break;
        }
    }
    if (match)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}