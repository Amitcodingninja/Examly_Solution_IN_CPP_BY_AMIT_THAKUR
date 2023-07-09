// You are using GCC

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string S;
    cin >> S;
    bool alternating = true;
    if (S.length() < 2)
        alternating = false;
    else
    {
        char first = S[0];
        char second = S[1];
        if (first == second)
            alternating = false;
        else
        {
            for (int i = 0; i < S.length(); i++)
            {
                if (i % 2 == 0 && S[i] != first)
                    alternating = false;
                if (i % 2 == 1 && S[i] != second)
                    alternating = false;
            }
        }
    }
    if (alternating)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}