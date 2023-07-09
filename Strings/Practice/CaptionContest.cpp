// You are using GCC

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char name1[100], name2[100];
    int count = 0, countq = 0, i;
    cin >> name1;
    cin >> name2;
    if (strlen(name1) == strlen(name2))
    {
        for (i = 0; i < strlen(name1); i++)
        {
            if ((name1[i] != '?' && (name2[i] != '?') && (name1[i] != name2[i])))
            {
                count++;
            }
        }
        for (i = 0; i < strlen(name1); i++)
        {
            if ((name1[i] == '?') || (name2[i] == '?'))
            {
                countq++;
            }
        }
    }
    countq = count + countq;
    cout << count << " " << countq;
    return 0;
}