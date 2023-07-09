// You are using GCC

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int sum = 0;
    char d[50];
    cin >> d;
    int l = strlen(d);
    for (int i = 0; i < l; i++)
    {
        if (d[i] == '1')
        {
            sum = sum + 1;
        }
    }
    if (sum == 1 || sum == (l - 1))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}