// You are using GCC

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s1;
    cin >> s1;
    int aCount = 0, bCount = 0;
    for (int i = 0; i < strlen(s1.c_str()); i++)
    {
        if (s1[i] == 'a')
            aCount++;
        else if (s1[i] == 'b')
            bCount++;
    }
    if (aCount <= bCount)
        cout << aCount;
    else
        cout << bCount;
    return 0;
}